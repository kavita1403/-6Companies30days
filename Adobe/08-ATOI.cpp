class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
     
        int ans=0;
        int sign=1;
        int i=0;
        if(str[i]=='-'){
            sign=-1;
            i++;
        }
      for(;i<str.size();i++){
          if(isdigit(str[i])){
               ans =ans*10+(str[i]-'0'); 
             
              
          }else{
             return -1;
          }
      }  
     return ans*sign;  
     
     
  
    }
};
