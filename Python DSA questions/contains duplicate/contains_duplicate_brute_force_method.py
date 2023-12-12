class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        for i in range(0,len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[i] == nums[j]:
                    return True
        return False

num = [1,3,4,2,8]
sol = Solution()
print(sol.containsDuplicate(num))

#The time complexity of this approach is O(n^2), where n is the length of the array.
#so, this approach is not efficient for large arrays -> TLE

#The space complexity of the given containsDuplicate method is O(1) because it uses 
# a constant amount of extra space regardless of the input size.