class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        vector<int>ans;
        sort(seats.begin(),seats.end());
        int a=0;
        sort(students.begin(),students.end());
        int sum=0;
        for(int i=0;i<seats.size();i++){
            
                
                a=abs(students[i]-seats[i]);    
                    

                
                ans.push_back(a);
            
            sum+=ans[i];

        }
        return sum;
        

        
    }
};