class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int one = 0, zero = 0, score = -1e9;
        for(int i = 0; i < n-1; i++){
            if(s[i] == '0'){
                zero++;
            }else{
                one++;
            }
            score = max(score, zero - one);
        }

        if (s[s.size() - 1] == '1'){
            one++;
        }

        return score + one;
    }
};
