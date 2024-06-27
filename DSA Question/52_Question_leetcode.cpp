// 54. Spiral Matrix
// Solved
// Medium
// Topics
// Companies
// Hint
// Given an m x n matrix, return all elements of the matrix in spiral order.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:


// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 10
// -100 <= matrix[i][j] <= 100





#include <bits/stdc++.h>

using namespace std;



vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;

        int n = matrix.size(); // no of rows
        int m = matrix[0].size(); // no of columns

        // Initailize the pointer reqd for traversal
        int top = 0, left = 0, bottom = n-1, right = m-1;

        // loop until all element are not travesed
        while(top <= bottom && left <= right) {
            
            // for moving left to right
            for(int i = left; i<= right; i++)
                ans.push_back(matrix[top][i]);

            top++;

            // for moving top to bottom
            for(int i = top; i<= bottom; i++)
                ans.push_back(matrix[i][right]);

            right--;

            // for moving right to left..
            if(top <= bottom){
                for(int i = right; i>= left; i--)
                    ans.push_back(matrix[bottom][i]);

                bottom--;
            }

            // for moving bottom to top
            if(left <= right) {
                for(int i = bottom; i>=top; i--)
                    ans.push_back(matrix[i][left]);

                left++;
            }
        }
        return ans;
    }


// int main() {
    
//   //Matrix initialization.
//   vector<vector<int>> mat   {{1, 2, 3, 4},
//                              {5, 6, 7, 8},
// 	                         {9, 10, 11, 12},
// 		                     {13, 14, 15, 16}};
		                     
//   vector<int> ans = printSpiral(mat);

//   for(int i = 0;i<ans.size();i++){
      
//       cout<<ans[i]<<" ";
//   }
  
//   cout<<endl;
  
//   return 0;
// }