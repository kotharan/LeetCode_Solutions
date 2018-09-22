#include <iostream>
#include <vector>

using namespace std;


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
    vector<int> twoSum(int nums[], int target) {
    vector<int> results[10];
    for(int i=0;i<sizeof(nums);i++)
    {
        int number = nums[i];
        int new_targ = target - number;

        for(int j=0 ; j<sizeof(nums);j++)
        {
            if(nums[j]==new_targ && j!=i && i < j)
            {

                results[0].push_back(i);
                results[1].push_back(j);

                return results[0,1];
            }

        }
    }

}
};


 int main()
 {
     Solution s;
     int arr[] = {2,7,11,15};
     vector<int> result = s.twoSum(arr,9);
    for(int value = 0 ; value <= result.size(); value++)
    {
        cout<< result[value];
    }

 }
