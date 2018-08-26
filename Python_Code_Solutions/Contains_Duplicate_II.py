class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        check = set()
        for i in range(len(nums)):
            if i > k:
                check.remove(nums[i - k - 1])
            if nums[i] in check:
                return True
            else:
                check.add(nums[i])
        return False



if __name__ == '__main__':
    s= Solution()
    Result= s.containsNearbyDuplicate([1,2,3,1,2,3],2)
    if Result != True:
        print (False)
    else:
        print (True)
