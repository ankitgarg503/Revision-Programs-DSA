#include<iostream>
using namespace std;

void generate(int arr[], int size, int currIndex, int currValue) {
    if (currIndex == size) {
        cout << currValue << "  ";
        return;
    }
    generate(arr, size, currIndex + 1, currValue);
    generate(arr, size, currIndex + 1, currValue + arr[currIndex]);
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    generate(arr, size, 0, 0);
    return 0;
}
