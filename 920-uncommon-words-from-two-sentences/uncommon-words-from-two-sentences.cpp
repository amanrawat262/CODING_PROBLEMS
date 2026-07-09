class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int>mp;
        stringstream ss1(s1);
        string word;
        while(ss1 >> word)
            mp[word]++;
        stringstream ss2(s2);
        while(ss2 >> word)
            mp[word]++;
        vector<string>vec;
        for(auto it:mp){
            if(it.second ==1)
                vec.push_back(it.first);
        }
    return vec;
    }
};