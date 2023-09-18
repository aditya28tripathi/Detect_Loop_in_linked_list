class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head){
        if(!head) return false;
        unordered_map<Node* , int>a;
        
        
        while(head){
            if(!a[head]){
                a[head]=1;
                head=head->next;
            }
            
            else{return true;}
        }
        
        return false;
        
        
    
    
    
        
    }
};
