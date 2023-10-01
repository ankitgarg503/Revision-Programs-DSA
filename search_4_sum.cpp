#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int k) {
    set<vector<int>> s;
    vector<vector<int>> v;
    sort(arr.begin(), arr.end());
    int size = arr.size();
    for (int i = 0; i < size - 3; i++) {
        for (int j = i + 1; j < size - 2; j++) {
            int low = j + 1;
            int high = size - 1;
            while (low < high) {
                int ele = arr[i] + arr[j] + arr[low] + arr[high];
                if (ele == k) {
                    s.insert({arr[i], arr[j], arr[low], arr[high]});
                    low++;
                    high--;
                } else if (ele > k) {
                    high--;
                } else {
                    low++;
                }
            }
        }
    }
    for (auto i : s) {
        v.push_back(i);
    }
    return v;
}

int main() {
    vector<int> arr{2, 3, 4, 5, 6, 7};
    vector<vector<int>> ans = fourSum(arr, 17);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) { // Corrected loop condition here
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
