"""
Done By >> Anand Kothari


Given an array of integers nums, write a method that returns the "pivot" index of this array.

We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index.

If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index.

Example 1:
Input:
nums = [1, 7, 3, 6, 5, 6]
Output: 3
Explanation:
The sum of the numbers to the left of index 3 (nums[3] = 6) is equal to the sum of numbers to the right of index 3.
Also, 3 is the first index where this occurs.
Example 2:
Input:
nums = [1, 2, 3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.

Note:
The length of nums will be in the range [0, 10000].
Each element nums[i] will be an integer in the range [-1000, 1000].

"""

class Solution(object):
    def pivotIndex(self, nums):
        n = len(nums)     # Gets Length of the list
        sums = sum(nums)  # Gets total of the list values
        currSum = 0


        for i in range(n):
            if sums-nums[i] == 2*currSum:   #Compares left sum of the index with the right
                return i
            else:
                currSum+= nums[i]           # Stores the sum of left values of the Index so that we don't have to loop through it again and again to find the sum
        return -1
