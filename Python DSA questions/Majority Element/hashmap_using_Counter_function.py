class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        mydict = collections.Counter(nums)
        for i in mydict:
            if mydict[i]>len(nums)/2:
                return i
#time complexity: O(n)
#space complexity: O(n)