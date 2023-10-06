#include <iostream>
#include <string>
#include<algorithm>
using namespace std;


void permutation2(string str){
    do
    {
        cout<<str<<endl;
    } while (next_permutation(str.begin(), str.end()));
    
}


// Recursive function to generate permutations of a string
void permutations(string str, int start, int end) {
    if (start == end) {
        cout << str << "  \n ";
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(str[start],str[i]);
        // swap(str, start, i); // Fix character at the current position
        permutations(str, start + 1, end); // Recurse for the remaining string
        // swap(str, start, i); // Backtrack by swapping characters back
        swap(str[start],str[i]);
    }
}

// Main function
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    cout << "Permutations of the string are:" << endl;
     permutations(str, 0, n - 1);
     cout<<"***** ******** ******\n"<<endl;
    permutation2(str);

    return 0;
}
