#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix;
    // directed graph with weights
    matrix.push_back({0, 1, 43});
    matrix.push_back({1, 0, 6});
    matrix.push_back({-1, -1, 0});
    int n = matrix.size();
    // if edge is not there then mark to infin weight

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matrix[i][j] == -1)
                matrix[i][j] = 1e8;
            if (i == j)
                matrix[i][j] = 0;
        }
    }
    // outer loop for matrixia edges and i,j loop for adj edge

    for (int via = 0; via < n; via++) {
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                matrix[i][j] = min(matrix[i][j], matrix[i][via] + matrix[via][j]);
            }
        }
    }

    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matrix[i][j] == 1e8)
                matrix[i][j] = -1;
            if (i == j)
                matrix[i][j] = 0;
        }
    }

    for (int i = 0; i <n; i++){
        for (int j = 0; j<n; j++){
              cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}