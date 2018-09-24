#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
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



// CODE WITH VECTOR MORE EFFICEINT WITH A AVERAGE RUNNING TIME OF O(1)

class Solution {
public:
   vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> comp;  // The syntax is kinda like this unordered_map<key,value> variable_name;
        vector<int> result;
        for(int i=0; i<numbers.size(); i++){
            if (comp.find(numbers[i])==comp.end() ) {  // m.find(key)==m.end() , This says if key is not there in the unordered_map array

                // store the first one position into the second one's key
                comp[target - numbers[i]] = i;  // m[key] = value , comp stores the compliments of the given array. ex: m[7] = 0
            }else {
                // found the second one
                result.push_back(comp[numbers[i]]);  // Pushes the values of the complement array keys to result vector
                result.push_back(i);                  // Pushes the current index number to result vector
                break;
            }
        }
        return result;
    }
};

 int main()
 {
     Solution s;
    vector<int> arr = {2,7,11,15};
    result = s.twoSum(arr,9);
    for(int value:result)  // Advanced for loop read as "For each value in result do this"
    {
        cout<< result[value];
    }
    return 0;
 }
