#include <iostream>
#include <vector>
using namespace std;
// Still working on the code

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for(int i=0; i<numbers.size(); i++){
            // not found the second one
            if (m.find(numbers[i])==m.end() ) {
                // store the first one poisition into the second one's key
                m[target - numbers[i]] = i;
            }else {
                // found the second one
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }
};

void main()
{
    Solution s1;
    arr[3]={1,2,2}
    s1.twoSum(arr,4);
}
