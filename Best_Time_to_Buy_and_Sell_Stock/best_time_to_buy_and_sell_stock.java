class Solution {
    public int maxProfit(int[] prices) {
        int buy = 0;
        int sell = 0;
        int maxReturn = 0;
        while (sell < prices.length) {
            if (prices[buy] < prices[sell]) {
                maxReturn = Math.max(maxReturn, prices[sell] - prices[buy]);
            } else {
                buy = sell;
            }
            sell ++;
        }
        return maxReturn;
    }
}
