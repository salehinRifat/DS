package Array;

public class BuyAndSell {
    public static int maxProfit(int[] prices) {
        int min = prices[0];
        int profit = 0;
        for(int i=0; i< prices.length; i++){
            min  = Math.min(min, prices[i]);
            profit = Math.max(profit, prices[i] - min );
        }
        return profit;
    }
    public static void main(String[] args) {
        
    }
}
