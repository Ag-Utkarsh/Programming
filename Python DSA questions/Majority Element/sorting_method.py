class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        return nums[len(nums)//2]
#time complexity: O(nlogn)
#space complexity: O(1)