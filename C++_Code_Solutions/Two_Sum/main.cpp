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
            if(nums[j]==new_targ && j!=i)
            {
                cout<<"["<<i<<","<<j<<"]";
                break;
            }

            }
            }



    }
};


 int main()
 {
     Solution s;
     int arr[] = {1,2,4,3};
     s.twoSum(arr,6);
 }
