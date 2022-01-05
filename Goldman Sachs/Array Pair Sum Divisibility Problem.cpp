class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>m;
        for(auto i:arr){m[i%k]++;}
        int f=1;
        for(int i=0;i<k;i++){
            if(i==0){
                if(m[i]%2)f=0;
            }else if(k%2==0 && i==k/2){
              if(m[i]%2) f=0;  
            }else{
                if(m[i]!=m[k-i]){
                    f=0;
                }
            }
        }
     return f;   
    }
};
