string printMinNumberForPattern(string s){
        int x=1;
        string st="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                st+=to_string(x++);
            }
            else
            {
                int cnt=0;
                while(i<s.size()&& s[i]=='D')
                {
                    i++;
                    cnt++;
                }
                    cnt++;
                for(int j=x+cnt-1;j>=x;j--)
                {
                    st+=to_string(j);
                }
                x+=cnt;
            }
        }
        if(s[s.size()-1]=='I')
        st+=to_string(x);
    return st;
    }
