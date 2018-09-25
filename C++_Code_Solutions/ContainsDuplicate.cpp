/*By>> Anand Kothari
Date : 09/25
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// This has a runtime of O(n), since it will take more time if there is an increase in the input

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


//unordered_set<int> isFound;
////If there are more duplicates than one and you wan to print all duplicates
//
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//    unordered_set<int> m;
//    for(int i=0;i<nums.size();i++)
//    {
//        if(m.find(nums[i])!= m.end()) // If it finds the duplicate
//        {
//            cout<<"It has a duplicate which is:: " <<nums[i]<<endl;
//            helper(nums[i]);
//        }
//        else
//        {
//            m.insert(nums[i]);
//        }
//
//    }
//    if(!helperCalled)
//    {
//    cout<<"No Duplicate found";
//    return false;
//    }
//    }
//
//
//bool helper(int num)
//{
//    if(isFound.find(num) == isFound.end()) // Duplicate is not found
//    {
//        isFound.insert(num);
//        helperCalled = true;
//    }
//    else
//    {
//    return true;
//    }
//}
//};

main()
{
    Solution s;
    vector<int> arr ={1,2,3,4,2,1};
    s.containsDuplicate(arr);

}
