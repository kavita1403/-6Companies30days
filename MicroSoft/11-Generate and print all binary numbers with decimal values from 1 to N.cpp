Q Link- https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/#


Solution- 
  
  vector<string> generate(int N)
{
    vector<string>ans;
    string res="";
   for(int i=1;i<=N;i++){
       int a=i;
      while(a){
          
          res=char(a%2+'0')+res;
          a/=2;
      } 
      ans.push_back(res);
      res="";
   }
   return ans;
}
