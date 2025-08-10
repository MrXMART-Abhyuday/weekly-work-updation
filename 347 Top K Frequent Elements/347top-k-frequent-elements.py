class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        from collections import Counter
        freq = Counter(nums)  # Count frequency of each number
        return [item for item, count in freq.most_common(k)]
