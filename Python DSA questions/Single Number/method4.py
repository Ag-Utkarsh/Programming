class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        mydict = collections.Counter(nums)
        for i in mydict:
            if mydict[i]==1:
                return i