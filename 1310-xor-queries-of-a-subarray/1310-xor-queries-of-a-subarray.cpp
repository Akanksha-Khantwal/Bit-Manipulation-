class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>result;
        vector<int>prefix(arr.size());
         prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]^arr[i];
        }
        for(auto item :queries){
            int l=item[0];
            int r=item[1];
            if(l==0)
            result.push_back(prefix[r]);
            else
            result.push_back(prefix[l-1]^prefix[r]);
        }
      return result;  
    }
};