class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans1;
        vector<int>ans2;
        vector<int>ans3;
        vector<int>final;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans1.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                ans2.push_back(nums[i]);
            }
            else{
                ans3.push_back(nums[i]);
            }


            
        }
        for(int x:ans1){
            final.push_back(x);
        }
        for(int x:ans2){
            final.push_back(x);
        }
        for(int x:ans3){
            final.push_back(x);
        }
        return final;
        
        
    }
};