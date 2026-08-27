class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int sum=0;
        int x=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                x=(nums2[j]-nums1[i]);
                ans.push_back(x);
            }
            

        }
        return x;
        


        
    }
};