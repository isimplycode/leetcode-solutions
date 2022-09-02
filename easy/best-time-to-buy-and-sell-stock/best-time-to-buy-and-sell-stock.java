class Solution {
    public int maxProfit(int[] prices) {
        int res=0;
        int msf=Integer.MAX_VALUE;
        for (int i=0; i<prices.length; ++i) {
            res=Math.max(res,prices[i]-msf);
            msf=Math.min(msf,prices[i]);
        }
        return res;
    }
}
