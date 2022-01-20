class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        int maxi=INT_MIN;
        string name="";
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            if(i.second>maxi){
                maxi=i.second;
                name=i.first;
            }else if(i.second==maxi){
                if(name<i.first){
                    continue;
                }else{
                    name=i.first;
                }
            }
        }
      vector<string> vec = {name,to_string(maxi)}; 
      return vec;
    }
};
