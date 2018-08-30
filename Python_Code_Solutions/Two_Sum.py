"""
By: Anand S Kothari

* Given an array of integers, find two numbers such that they add up to a specific target number.
*
* The function twoSum should return indices of the two numbers such that they add up to the target,
* where index1 must be less than index2. Please note that your returned answers (both index1 and index2)
* are not zero-based.
*
* You may assume that each input would have exactly one solution.
*
* Input: numbers={2, 7, 11, 15}, target=9
* Output: index1=1, index2=2
"""

#  The easy solution is O(n^2) run-time complexity.
class Solution(object):

    # def twoSum(self, nums, target ):      #Degining the twoSum function
    #     length_of_nums = len(nums)        # Storing len of the input array
    #     for i in range(length_of_nums):   # Storing range of the length which starts from 0
    #         for j in range(i+1, length_of_nums): #Storing range from the i+1 position
    #             if (nums[i] + nums[j] == target): #Condition
    #                 return [i,j]                  # Return Statement  
    #

    def twoSum(self, nums, target):
        # hash 2
        hash_nums = {}
        for index, num in enumerate(nums):
            another = target - num
            try:
                hash_nums[another]
                return [hash_nums[another], index]
            except KeyError:
                hash_nums[num] = index


if __name__ == '__main__':
    s = Solution()
    print (s.twoSum([2, 7,11, 15], 9))
