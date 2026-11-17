class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX;
        int best = 0;

        for (int price : prices) {
            lowest = min(lowest, price);
            best = max(best, price - lowest);


        }

        return best;
    
        
    }
};
