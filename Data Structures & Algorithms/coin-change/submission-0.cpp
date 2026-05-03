class Solution {
public:
    int n;
    int solve(vector<int>& coins, int amt, int i){
        if(i>=n || amt<0) return 1e5;
        if(amt==0) return 0;
        return min(1+solve(coins,amt-coins[i],i), solve(coins,amt,i+1));
    }
    int coinChange(vector<int>& coins, int amount) {
        n = coins.size();
        int ans = solve(coins, amount, 0);

        return ans>=1e5 ? -1 : ans;
    }
};
