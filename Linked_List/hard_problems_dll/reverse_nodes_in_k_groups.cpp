/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*rev(ListNode*head){
        if(!head || !head->next){
            return head;
        }
        ListNode*p=NULL;
        ListNode*c=head;
        ListNode*n=head->next;
        while(n){
            c->next=p;
            p=c;
            c=n;
            n=n->next;
        }
        c->next=p;
        return c;
    }
    ListNode* getKthNode(ListNode*temp,int k){
        k-=1;
        while(temp && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1){return head;}
        ListNode*temp=head;
        ListNode*prevLast=NULL;
        while(temp!=NULL){
            ListNode*kthNode=getKthNode(temp,k);
            if(!kthNode){
                if(prevLast){prevLast->next=temp;}
                //incase the linked list is not big enough for k count
                break;
            }
            ListNode*nextNode=kthNode->next;
            kthNode->next=NULL;
            rev(temp);
            if(temp==head){
                head=kthNode;
            }else{
                prevLast->next=kthNode;
            }
            prevLast=temp;
            temp=nextNode;
        }
        return head;
    }
};
