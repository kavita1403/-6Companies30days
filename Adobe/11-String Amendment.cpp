class Solution{
    public:
    string amendSentence (string s)
    {
        string str="";
        str+=tolower(s[0]);
        // int i=1;
        for(int i=1;i<s.size();i++){
            if(isupper(s[i])){
                str+=" ";
                str+=tolower(s[i]);
            }
            else{
                str+=s[i];
            }
        }
        return str;
    }
};
