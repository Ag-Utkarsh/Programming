#also called window sliding method
class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:
        window = set()
        L = 0
        for R in range(len(nums)):
            if R-L>k:
                window.remove(nums[L])
                L+=1
            if nums[R] in window:
                return True
            window.add(nums[R])
        return False

sol = Solution()
print(sol.containsNearbyDuplicate([1,2,3,1,2,3],2))

#Time complexity: 0(n)
#Space complexity: 0(n)