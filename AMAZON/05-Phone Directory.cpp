Q Link: https://practice.geeksforgeeks.org/problems/phone-directory4628/1/


class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> vec;
        set<string> st;
        string search_str;
        search_str = s.substr(0,1); // first char of s
        for(int j=0;j<n;j++){
            if(contact[j].substr(0,1)==search_str){
                st.insert(contact[j]);
            }
        }
        
        vector<string> temp;
        if(!st.empty()){
            for(auto it:st){
                temp.push_back(it);
            }
            vec.push_back(temp);
        }
        else
        {
            temp.push_back("0");
            for(int d=0;d<s.size();++d){
                vec.push_back(temp);
            }
            return vec;
        }
        
        for(int i=1;i<s.size();++i){
            temp.clear();
            search_str = s.substr(0,i+1);
            for(int j=0;j<vec[i-1].size();++j){
                if(vec[i-1][j].substr(0,i+1)==search_str){
                    temp.push_back(vec[i-1][j]);
                }
            }
            if(temp.size()==0)
            {
                temp.push_back("0");
                while(i<s.size()){
                    vec.push_back(temp);
                    i++;
                }
                return vec;
            }
            else
            vec.push_back(temp);
        }
        return vec;
    }
};
