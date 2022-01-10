class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
  
      
         Node *start=head;
        while(start){
           
            for(int i=1;i< M && start;i++){
                start=start->next;
            }
            if(!start)return;
            Node *temp =start;
            for(int j=0;j<=N && temp;j++){
                temp=temp->next;
            }
            start->next=temp;
            start=temp;
        } 
    
    }
};
