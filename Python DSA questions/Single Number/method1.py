class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        for i in range(len(nums)):
            count = 0
            for j in range(len(nums)):
                if nums[j] == nums[i]:
                    count+=1
            if count == 1:
                return nums[i]
        return
sol = Solution()
print(sol.singleNumber([2]))