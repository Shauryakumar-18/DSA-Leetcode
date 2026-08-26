class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=n;
        int sum=0;
        int product=1;
        while(num>0){
            int digit=num%10;
            product=product*digit;
            sum=sum+digit;
            num/=10;

        }
        return product-sum;
        
    }
};