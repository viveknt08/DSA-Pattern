class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int prod = 1;

        while(n>0){
            int n1 = n%10;
            n = n/10;

            sum +=n1;
            prod *= n1;
        }
        int d = sum + prod;
       
       return (num % d == 0);
    }
};