string encode(string src)
{ int n=src.size();
  int c=1; 
  string ans="";
  for(int i=0;i<n-1;i++){
    if(src[i]==src[i+1])c++;
    else{
        ans +=src[i];
        ans+=char(c+'0');
        c=1;
    }
    
  }
   ans +=src[n-1];
   ans+=char(c+'0');
       
  return ans;
}
