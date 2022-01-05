class Solution {
public:
   
      string gcdOfStrings(string a, string b) {
         // 2=ABABS
         // 1=ABABABSS
          int as = a.size(),bs=b.size();
          if(as>bs){
              swap(a,b);
              swap(as,bs);
          }
          string temp="",ans="";
          for(int i=0;i<__gcd(as,bs);i++)
          {
              temp += a[i];
              int ts = temp.size();
              if(as%ts == 0 && bs%ts == 0)
              {
                  string temp2=temp;
                  while(temp2.size()<as)
                      temp2+=temp;
                  
                  if(temp2 == a){
                    while(temp2.size()<bs)
                      temp2+=temp;
                     if(temp2==b){
                         ans = temp;
                     }
                  }
              }
          }
          return ans;
    }  
        
    
};
