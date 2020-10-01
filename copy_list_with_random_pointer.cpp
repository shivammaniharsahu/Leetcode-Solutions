/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        while(temp){
            Node* next=temp->next;
            temp->next=new Node(temp->val);
            temp->next->next=next;
            temp=next;
        }
        temp=head;
        while(temp){
            temp->next->random=temp->random?temp->random->next:temp->random;
            temp=temp->next?temp->next->next:temp->next;
        }
        Node* original=head;
        Node* copy =head->next;
        temp=head->next;
        while(original && copy){
            original->next=original->next?original->next->next:original->next;
            copy->next=copy->next?copy->next->next:copy->next;
            original=original->next;
            copy=copy->next;
        }
        return temp;
        
    }
};