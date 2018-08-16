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

    def twoSum(self, nums, target ):
        length_of_nums = len(nums)
        for i in range(length_of_nums):
            for j in range(i+1, length_of_nums):
                if (nums[i] + nums[j] == target):
                    return [i,j]





# def twoSum(self, nums, target):
#     # hash 1
#     hash_nums = {}
#     for index, num in enumerate(nums):
#         try:
#             hash_nums[num].append(index)
#         except KeyError:
#             hash_nums[num] = [index]
#     for index, num in enumerate(nums):
#         another = target - num
#         try:
#             candicate = hash_nums[another]
#             if another == num:
#                 if len(candicate) > 1:
#                     return candicate
#                 else:
#                     continue
#             else:
#                 return [index, candicate[0]]
#         except KeyError:
#             pass
    #
    # def twoSum(self, nums, target):
    #     # hash 2
    #     hash_nums = {}
    #     for index, num in enumerate(nums):
    #         another = target - num
    #         try:
    #             hash_nums[another]
    #             return [hash_nums[another], index]
    #         except KeyError:
    #             hash_nums[num] = index

        # def twoSum(self, nums, target):
        #     # two point
        #     nums_index = [(v, index) for index, v in enumerate(nums)]
        #     nums_index.sort()
        #     begin, end = 0, len(nums) - 1
        #     while begin < end:
        #         curr = nums_index[begin][0] + nums_index[end][0]
        #         if curr == target:
        #             return [nums_index[begin][1], nums_index[end][1]]
        #         elif curr < target:
        #             begin += 1
        #         else:
        #             end -= 1

#
if __name__ == '__main__':
    # begin
    s = Solution()
    print (s.twoSum([3, 7, 5, 2, 4], 9))
