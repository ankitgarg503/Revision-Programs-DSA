#include <iostream>
#include <string>
using namespace std;

// Function to swap characters at positions i and j in the string
// void swap(string& str, int i, int j) {
//     char temp = str[i];
//     str[i] = str[j];
//     str[j] = temp;
// }

// Recursive function to generate permutations of a string
void permutations(string str, int start, int end) {
    if (start == end) {
        cout << str << "   ";
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

    return 0;
}
