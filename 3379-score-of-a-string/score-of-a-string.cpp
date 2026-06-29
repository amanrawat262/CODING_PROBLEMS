class Solution {
public:
    int scoreOfString(string s) {
       //h e l l o 
        //  0 1 2 3 4  
        int sum=0;
       for(int i=1;i<s.length();i++){
        int ch1=(int)s[i];
        int ch2=(int)s[i-1];
        sum=sum+abs(ch1-ch2);
       }
       return sum;
    }
};