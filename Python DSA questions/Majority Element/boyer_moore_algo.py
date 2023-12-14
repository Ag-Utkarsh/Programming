class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = 0
        result = 0
        
        for num in nums:
            if count == 0:
                result= num
            count += (1 if num == result else -1)
            #if num == candidate:
            #    count += 1
            #else:
            #    count -= 1
        
        return result
#time complexity: O(n)
#space complexity: O(1)