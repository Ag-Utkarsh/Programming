class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        for num in nums:
            occurance = nums.count(num)
            if occurance > (len(nums)/2):
                return num
#time complexity: O(n^2)