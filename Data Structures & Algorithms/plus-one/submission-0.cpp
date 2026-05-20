class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int car = 0;
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                int tmp = digits[i]+1;
                car = tmp/10;
                digits[i] = tmp%10;
            }
            else{
                int tmp = digits[i]+car;
                car = tmp/10;
                digits[i] = tmp%10;
            }
        }
        if (car) digits.insert(digits.begin(), car);
        return digits;
    }
};
