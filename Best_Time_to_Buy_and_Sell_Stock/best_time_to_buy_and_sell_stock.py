class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy, sell = 0, 0
        max_return = 0
        while sell < len(prices):
            if prices[buy] < prices[sell]:
                max_return = max(max_return, prices[sell] - prices[buy])
            else:
                buy = sell
            sell += 1
        return max_return
