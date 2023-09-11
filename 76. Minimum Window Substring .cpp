class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        string str;
        for(auto it:t)mp[it]++;
        int i=0,j=0;
        int ans=s.size()+1;
        int l=mp.size();
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                 mp[s[j]]--;
              if(mp[s[j]]==0)l--;
            }
            if(l>0)j++;
            else if(l==0){
                while(mp.find(s[i])==mp.end() || mp[s[i]]<0){
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                    }
                    i++;
                }
                if(ans>j-i+1){
                    ans=j-i+1;
                    str=s.substr(i,j-i+1);
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1)l++;
                }
                i++;j++;
            }
        }
        
        return str;
    }
};