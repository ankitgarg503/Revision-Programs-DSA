#include<iostream>
#include<vector>
using namespace std;
int main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3,col=3;
    int startingRow=0,startingCol=0;
    int endingRow=row-1,endingCol=col-1;

    // Code for Spiral Traverse
    vector<int> v;
    int count=0;
    int total=row*col;
    while (count<total)
    {    
        for (int i = startingCol; i <=endingCol and count<total; i++){
            v.push_back(A[startingRow][i]);
            count++;
        }
    startingRow++;
        for (int i = startingRow; i <=endingRow and count<total; i++){
            v.push_back(A[i][endingCol]);
            count++;
        }
    endingCol--;
        for (int i = endingCol; i >=startingCol and count<total; i--){
            v.push_back(A[endingRow][i]);
            count++;
        }
    endingRow--;
        for (int i = endingRow; i >=startingRow and count<total; i--){
            v.push_back(A[i][startingCol]);
            count++;
        }
    startingCol++;
    
    }
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}