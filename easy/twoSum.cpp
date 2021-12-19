/*
Two Sum
1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
2. You may assume that each input would have exactly one solution, and you may not use the same element twice.
3. You can return the answer in any order.
***************************************************************
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:

    2 <= nums.length <= 104
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.

 Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
// variables
    const int as = 4;
    int nums[as] = {2, 7, 11, 15}, i, target = 9;

// buscar dos valores en el arreglo que sumados produzcan target
    for (i = 0; i < as - 1; i++){
        int sum;
        sum = nums[0] + nums[i+1];  //need to fix maybe by fixing value and then verifying for each ar[]
        if (sum == target){
            cout << "The sum of nums[" << i << "] = " << nums[i] << " + nums[" << i+1 << "] = " << nums[i+1] <<
            " is equal to target " << target << endl;
        }
               
    }
        return 0;

}

