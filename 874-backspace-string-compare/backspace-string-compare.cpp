class Solution {
public:
    bool backspaceCompare(string s, string t) {

        int i=s.size()-1;
        int j=t.size()-1;

        int lefts=0,leftt=0;

        while(i>=0 || j>=0)

        {

            while(i>=0)
            {
                if(s[i] == '#')
                {
                    lefts++;
                    i--;
                }

                else if(lefts>0)
                {
                    lefts--;
                    i--;
                }
                else break;
            }

            while(j>=0)
            {
                if(t[j]=='#')
                {
                    leftt++;
                    j--;
                }
                else if(leftt>0)
                {
                    leftt--;
                    j--;
                }
                else break;
            }



            //compaer the caracter
            if(i>=0 && j>=0 && s[i]!=t[j])
            {
                return false ;
            } 

            if((i>=0)!=(j>=0)){
                return false ;
            }

            i--;
            j--;





        }
        return true;
        
    }
};