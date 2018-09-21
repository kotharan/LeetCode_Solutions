#include <iostream>
#include <vector>

using namespace std;

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
