class Solution: 
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        current_count, best_count = 0, 0
        for i in nums:
            if i == 1:
                current_count += 1
            else: 
                best_count =max(best_count, current_count)
                current_count = 0
        return max(best_count, current_count)
