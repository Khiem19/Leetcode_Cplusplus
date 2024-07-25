class Solution(object):
    def majorityElement(self, nums):
        count = {}
        for item in nums:
            count[item] = count.get(item, 0) + 1
            if count[item] > len(nums)//2:
                return item