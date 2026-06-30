class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto it:details){
            int temp1=it[11]-'0';
            int temp2=it[12]-'0';
            temp1=temp1*10+temp2;
            if(temp1>60){
                count++;
            }
        }
        return count;
    }
};