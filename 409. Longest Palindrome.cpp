class Solution {
public:
    int longestPalindrome(string s) {
        int rep[58] = {0};
        for(char c : s) rep[int(c - 'A')]++;
        int cnt = 0, odd = 0;
        for(int i = 0; i < 58; i++){
            if(rep[i] % 2 == 0) cnt += rep[i];
            else{
                cnt += (rep[i] - 1);
                odd++;
            }
        }
        return odd > 0 ? cnt + 1 : cnt;
    }
};
