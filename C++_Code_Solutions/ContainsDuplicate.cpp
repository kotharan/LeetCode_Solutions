/*By>> Anand Kothari
Date : 09/25
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> m;
    for(int i=0;i<nums.size();i++)
    {
        if(m.find(nums[i])!= m.end()) // If it finds the duplicate
        {
            return true;               // Returning true if the duplicate is found
        }
        else
        {
            m.insert(nums[i]);
        }

    }
    return false;
    }
};


main()
{
    Solution s;
    vector<int> arr ={1,2,3,4,2,1};
    s.containsDuplicate(arr);

}
