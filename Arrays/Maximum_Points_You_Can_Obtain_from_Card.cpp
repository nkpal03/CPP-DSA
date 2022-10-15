class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        
        // Sliding window
        
        int ans=0;
        for(int i=0; i<k; i++){
            ans+=cardPoints[i];
        }
        int currentAns=ans;
        for(int i=k-1; i>=0; i--){
            currentAns-=cardPoints[i];
            currentAns+=cardPoints[n-1];
            n--;
            ans=max(currentAns,ans);
        }
        return ans;
    }
    
};
