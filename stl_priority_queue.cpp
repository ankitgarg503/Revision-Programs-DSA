 #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int> pq;
//     pq.push(23);
//     pq.push(4);
//     pq.push(255);
//     pq.push(25);
//     pq.pop();
//     cout<<pq.top()<<endl;
//     return 0;
// }
#include <vector>
#include <algorithm>
#include <unordered_map>

std::vector<std::string> findRanks(std::vector<int>& score) {
    int n = score.size();
    
    // Create a copy of the score array and sort it in descending order
    std::vector<int> sortedScore(score);
    std::sort(sortedScore.rbegin(), sortedScore.rend());

    // Create a map to store athlete's rank based on their score
    std::unordered_map<int, std::string> rankMap;
    rankMap[sortedScore[0]] = "Gold Medal";
    rankMap[sortedScore[1]] = "Silver Medal";
    rankMap[sortedScore[2]] = "Bronze Medal";

    for (int i = 3; i < n; i++) {
        rankMap[sortedScore[i]] = std::to_string(i + 1);
    }

    // Create the answer array based on the original scores
    std::vector<std::string> answer(n);
    for (int i = 0; i < n; i++) {
        answer[i] = rankMap[score[i]];
    }

    return answer;
}

int main() {
    std::vector<int> score = {10, 5, 20, 10, 30};
    std::vector<std::string> answer = findRanks(score);

    // Print the ranks of the athletes
    for (const std::string& rank : answer) {
        std::cout << rank << " ";
    }

    return 0;
}
