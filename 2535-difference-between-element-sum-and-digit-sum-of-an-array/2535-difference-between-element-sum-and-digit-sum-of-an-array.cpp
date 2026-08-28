class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        
        int sum2=0;
        for(int i=0;i<nums.size();i++){
             int n=nums[i];
            sum+=nums[i];
            while(n>0){
           
            int digit=n%10;
            sum2+=digit;
            n/=10;



            }
            
            
            

        }
        return abs(sum2-sum);
        

    }
};