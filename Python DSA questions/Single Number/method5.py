class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        lst_num = list(set(nums))
        n = len(lst_num)
        
        for i in range (n):
            occurance = nums.count(lst_num[i])
            if occurance == 1:
                return lst_num[i]
        