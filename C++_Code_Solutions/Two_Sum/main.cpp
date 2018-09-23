#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
size_t size=10;
 vector<int> result;
/* CODE TO GET VALUES WITHOUT THE USE OF VECTOR

class Solution {
public:
    int twoSum(int nums[], int target) {

    for(int i=0;i<sizeof(nums);i++)
    {
        int number = nums[i];
        int new_targ = target - number;

        for(int j=0 ; j<sizeof(nums);j++)
        {
            if(nums[j]==new_targ && j!=i && j < sizeof(nums) && i < j)
            {
                cout<<"["<<i<<","<<j<<"]";

            }

        }
     }

    }
};

 int main()
 {
     Solution s;
     int arr[] = {2,7,11,15};
     s.twoSum(arr,9);
 }

*/






class Solution {
public:

    vector<int> twoSum(vector<int> &nums, int target) {

    for(int i=0;i<nums.size();i++)
    {
        int number = nums[i];
        int new_targ = target - number;

        for(int j=0 ; j<nums.size();j++)
        {
            if(nums[j]==new_targ && j!=i && i < j)
            {

                result.push_back(i);
                result.push_back(j);


            }

        }
    }  return result;


}
};

 int main()
 {
     Solution s;
    vector<int> arr = {2,7,11,15};
    result = s.twoSum(arr,9);
    for(int value = 0 ; value < result.size(); value++)
    {
        cout<< result[value];
    }
    return 0;

 }
