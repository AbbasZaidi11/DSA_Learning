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
        if(!head){return head;}
        Node*temp=head;
        while (temp){
            Node*curr=new Node(temp->val);
            Node*holder=temp->next;
            temp->next=curr;
            curr->next=holder;
            temp=temp->next->next;
        }
        temp=head;
        while(temp && temp->next){
            Node*holder=temp->next;
            if(temp->random){
                Node*tempRandom=temp->random;
                holder->random=tempRandom->next;
            }
            temp=temp->next->next;
        }

        Node*newHead=new Node(-1);
        Node*ptr=newHead;
       temp=head;
        while(temp && temp->next){
            Node*holder=temp->next;
            ptr->next=holder;
            ptr=ptr->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return newHead->next;

    }
};
