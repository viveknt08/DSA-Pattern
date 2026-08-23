class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int leftsum = 0, rightsum = 0;
        int leftqcount = 0, rightqcount = 0;

        for(int i=0; i<n; i++){
            if(num[i] == '?'){
                if(i < n/2){
                    leftqcount++;
                }
                else{
                    rightqcount++;
                }
            }
            else{
                if(i < n/2){
                    leftsum += num[i] - '0';
                }
                else{
                    rightsum += num[i] - '0';
                }
            }
        }
        int totalqmark = leftqcount+rightqcount;
        if(totalqmark%2 != 0)
            return true;

        int left = 2 * leftsum + 9*leftqcount;
        int right = 2* rightsum + 9*rightqcount;

        if(left == right)
            return false;

        return true;
    }
};