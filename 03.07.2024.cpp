class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        Node *temp=head;
        Node *prev=NULL;
        while(temp!=NULL){

            int cnt=0;
            while(temp!=NULL && temp->next != NULL){
                if(temp->data == temp->next->data){
                    temp=temp->next;
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt>0){
                if(prev != NULL){
                    prev->next=temp->next;
                    temp=prev->next;
                }
                else{
                    head=temp->next;
                    temp=head;
                }
            }
                else{
                prev = temp;
                temp=temp->next;
            }

        }
        return head;
    }
};
