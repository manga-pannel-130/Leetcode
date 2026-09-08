class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = 0;
        vector<bool> res(candies.size());
        for(int i = 0;i<candies.size();i++){
            if(maxCandy<candies[i]){
                maxCandy = candies[i];
            }
        }
        for(int i = 0;i<candies.size();i++){
            if(maxCandy <= candies[i]+extraCandies ){
                res[i] = true;
            }
            else{
                res[i] = false;
            }
        }
        return res;
    }
};