class Solution {
public:
    void solve(vector<int> &cookies,vector<int>&distArr, int k ,int i , int &best){
        if(i == cookies.size()){
            best = min(best , *max_element(distArr.begin(),distArr.end()));
            return;
        }

        for(int j = 0 ; j < k; j++){
            if( distArr[j] + cookies[i] >= best) continue;
            distArr[j] += cookies[i];
            solve(cookies , distArr,k ,  i + 1 , best);
            distArr[j] -= cookies[i];
            
        }

    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> distArr(k,0);
        int best = INT_MAX-1;
        
        
        solve(cookies , distArr , k , 0 , best);
        return best;

        
    }
};