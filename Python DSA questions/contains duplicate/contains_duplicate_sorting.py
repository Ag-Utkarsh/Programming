class Solution:
    def containsDuplicate(self, nums:list[int])->bool:
        nums.sort()
        for i in range(1,len(nums)):
            if nums[i] == nums[i-1]:
                return True
        return False

sol = Solution()
print(sol.containsDuplicate([3,4,5,1,0,2]))

#The time complexity of this approach is O(n log n), where n is the length of the array.

#The space complexity of the entire program, including the containsDuplicate method, 
# is O(1) because the program does not use any additional space that grows with the input size.

#The overall time complexity of the program can be expressed as O(n log n), where n is the number 
# of elements in the input list. This is because the sort() method has a time complexity of O(n log n)
# and the subsequent loop has a time complexity of O(n). When we have multiple operations in sequence,
# we take the operation with the highest time complexity, which in this case is the sorting operation. 
# Therefore, the overall time complexity is O(n log n)