class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(bills[i]==10){
                if(x==0) return 0;
                x--;
                y++;
            }
            else if(bills[i] == 20){
                if(y > 0 && x > 0){
                    y--;
                    x--;
                }
                else if(x >= 3){
                    x -= 3;
                }
                else return false;
            }
            else x++;
        }

        return 1;
    }
};