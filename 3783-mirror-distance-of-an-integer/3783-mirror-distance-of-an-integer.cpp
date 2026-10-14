class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int original=n;
        int remainder=0;
        while(n!=0){
            remainder=n%10;
            rev=rev*10+remainder;
            n/=10;
            
            


        }

        
        return (abs(original-rev));
    }
};