"""
By: Anand Kothari

Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:
The solution set must not contain duplicate triplets.

Example:
Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
"""


class Solution(object):

    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result = []
        nums.sort()                             # Sort the numbers in nums list and store it nums valriable again
        length_of_nums = len(nums)
        for i in range(length_of_nums - 2):     # Range Starts with 0 therefore first i value would be 0
            if i > 0 and nums[i] == nums[i-1]:  # This says that if the previos value of 'i' is same as the current value than the result would be same therefore skip that duplicate result
                continue                        # It skips the current loop and continues with the conditional while loop
            j = i+1
            k = length_of_nums - 1

            while  j < k:
                current_Summation = nums[i] + nums[j] + nums[k]
                if current_Summation == 0:
                    result.append([nums[i],nums[j],nums[k]])
                    while j<k and nums[j] == nums[j+1]:
                        j+=1
                    while j<k and nums[k] == nums[k-1]:
                        k-=1
                    j+=1
                    k-=1
                elif current_Summation < 0:
                    j+=1
                else:
                    k-=1

        return result


if __name__ == '__main__':
    s = Solution()
    print (s.threeSum([-1, 0, 1, 2, -1, -4]))
