class Solution {
public:
    string convertbinary(uint32_t n){
        string s="";
        while(n>0){
           
            if(n%2==1)
                s+='1';
            else
                s+='0';
            n=n/2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    int hammingWeight(uint32_t n) {
        int count =0;
        string temp=convertbinary(n);
        for(int i=temp.size()-1;i>=0;i--){
            if(temp[i]=='1')
            count++;
        }
        return count;
    }

};
