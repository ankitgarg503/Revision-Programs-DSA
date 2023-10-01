#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to generate all subsequences of a string
void generateSubsequences(string str, string current, int index,vector<string>& ans) {
    if (index == str.length()) {
        // cout << current << endl;
        ans.push_back(current);
        return;
    }

    // Exclude the current character
    generateSubsequences(str, current, index + 1,ans);
    // Include the current character
    generateSubsequences(str, current + str[index], index + 1,ans);

}

// Main function
int main() {
    string str;
    vector<string> ans;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Subsequences of the string are:" << endl;
    generateSubsequences(str, "", 0,ans);
    string t="Nit";
    bool p=false;
    for (int i = 0; i < ans.size(); i++)
    {
         cout<<ans[i]<<endl;
         if(ans[i]==t){
            p=true;
         }
    }
    if(p){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
