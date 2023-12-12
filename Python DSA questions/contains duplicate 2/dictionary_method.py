class Solution:
    def containsDuplicate(self, nums:list[int],k:int)->bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False

sol = Solution()
print(sol.containsDuplicate([1,0,1,1],1))

#runtime 72ms