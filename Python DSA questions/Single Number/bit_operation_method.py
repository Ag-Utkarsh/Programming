class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result = 0
        for num in nums:
            result ^= num
        return result

#time complexity: 0(n)
#Space complexity: 0(1)