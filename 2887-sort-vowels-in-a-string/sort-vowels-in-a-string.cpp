class Solution {
public:
    string sortVowels(string s) {

        vector<int>upper(26,0);
        vector<int>lower(26,0);

        for(int i=0;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';

            }
            else if(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';

            }
        }
        string ans;
        //for upper case 

        for(int i=0;i<26;i++){
            char c='A'+i;
            while(upper[i]){
                ans+=c;
                upper[i]--;
            }
        }

        //for lower 
        for(int i=0;i<26;i++){
            char c='a'+i;
            while(lower[i]){
                ans+=c;
                lower[i]--;
            }
        }

        int frist=0,second=0;

        while(second<ans.size()){
            if(s[frist]=='#'){
                s[frist]=ans[second];
                second++;
            }
        frist++;
        }
        return s;
        
    }
    
};