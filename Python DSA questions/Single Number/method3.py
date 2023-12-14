class Solution:
    def singleNumber(self, nums: List[int]) -> int:


        hash = {}

        for i in nums:
            hash[i] = hash.get(i,0)+1
        
        for j in hash:
            if hash[j] == 1:
                return j