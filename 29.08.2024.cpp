class Solution {
  public:
    int loopLength(Node* turtle,Node* rabbit){
        int count=1;
        rabbit=rabbit->next;
        while(rabbit!=turtle){
            count++;
            rabbit=rabbit->next;
        }
        return count;
    }
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* turtle=head;
        Node* rabbit=head;
        while(rabbit!=NULL && rabbit->next !=NULL){
            turtle=turtle->next;
            rabbit=rabbit->next->next;
            if(turtle==rabbit){
                return loopLength(turtle,rabbit);
            }
        }
        return 0;
    }
};
