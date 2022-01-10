class Solution {
	public:
		string FirstNonRepeating(string A){
		queue<char>q;
		string ans="";
		int freq[123]={0};
		for(int i=0;i<A.size();i++){
		    q.push(A[i]);
		    freq[A[i]]++;
		    while(!q.empty() && freq[q.front()]!=1) q.pop();
		    if(q.size()!=0){
		        ans +=q.front();
		    }else{
		        ans +='#';
		    }
		}
		 return ans;
		    
		}

};
