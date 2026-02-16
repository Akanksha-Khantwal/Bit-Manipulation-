class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int bits=0;bits<32;bits++){
            int count=0;
            for(int num:nums){
                if(num &(1<<bits)){
                    count++;
                }
                if(count>n/2){
                    ans=ans|1<<bits;
                    

                }
            }
           
        }
    return ans;
    }
};
