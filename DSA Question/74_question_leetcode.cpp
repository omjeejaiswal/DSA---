// 74. Search a 2D Matrix
// Solved
// Medium
// Topics
// Companies
// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

 

// Example 1:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104



class Solution {
public:

//     bool binarySearch(vector<int>& nums, int target) {
//         // aproach -2
//     int n = nums.size(); //size of the array
//     int low = 0, high = n - 1;

//     // Perform the steps:
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (nums[mid] == target) return true;
//         else if (target > nums[mid]) low = mid + 1;
//         else high = mid - 1;
//     }
//     return false;
// }


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*
        // t.c - O(n*m) , s.c - O(1)
        int n = matrix.size(); // no of rows
        int m = matrix[0].size(); // no of column

        // traverse the matrxi
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                if(matrix[i][j] == target)
                    return true;
            }
        }
        return false;
        */

        /* 
            Approach -2
            int n = matrix.size(); // no of rows
        int m = matrix[0].size(); // no of column

        for(int i = 0; i<n; i++) {
            if(matrix[i][0] <= target && target <= matrix[i][m-1]) {
                return binarySearch(matrix[i], target);
            }
        }
        return false;
        */


        int n = matrix.size(); // no of rows
        int m = matrix[0].size(); // no of column

        int low = 0, high = n*m-1;
        while(low <= high){
            int mid = (low + high) / 2;
            int row = mid / m, col = mid%m;
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
        
    }
};