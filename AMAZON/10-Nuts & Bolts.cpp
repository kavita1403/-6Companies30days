*Have to optimize the solution*
Q Link- https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1




class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	   map<char,int>mp;
	   
	   for(int i=0;i<n;i++){
	       mp[nuts[i]]++;
	   }
	   int k=0;
	   for(auto i:mp){
	       nuts[k++]=i.first;
	      if(k==n){
	          break;
	      } 
	   }
	   int l=0;
	   for(auto i:mp){
	       bolts[l++]=i.first;
	      if(l==n){
	          break;
	      } 
	   }
	   
	}

};
