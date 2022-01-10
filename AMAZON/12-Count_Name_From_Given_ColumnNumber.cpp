Q Link: https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/



class Solution{
    public:
    string colName (long long int n)
    {
        string result="";
        while(n){
            char c='A'+(n-1)%26;
            n=(n-1)/26;
            result=c+result;
        }
       
        return result;
    }
};
