class Solution {
public:
    typedef long long int ll;
    long long countCommas(long long n) {
        ll res = 0;
        ll start = 1000;

        while(start <= n){
            res += (n-start+1);
            start *= 1000;
        }
        return res;
    }
};