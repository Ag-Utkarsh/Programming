class Solution:
    def containsDuplicate(self, nums:list[int])->bool:
        hashset = set()
        for i in nums:
            if i in hashset:
                return True
            hashset.add(i)
        return False

sol = Solution()
print(sol.containsDuplicate([3,4,5,1,0,2,9,0]))