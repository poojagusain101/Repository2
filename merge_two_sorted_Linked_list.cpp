class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* temp1=list1;
        ListNode* temp2=list2; 
        ListNode* newlist=new ListNode(0);
        ListNode* nl=newlist;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                nl->next=new ListNode(temp1->val);
                nl=nl->next;
                temp1=temp1->next;
            }
            else{
               nl->next=new ListNode(temp2->val);
                nl=nl->next;
                temp2=temp2->next;                 
            }
            // nl=nl->next;
        }
        while(temp1!=NULL){
            nl->next=new ListNode(temp1->val);
             nl=nl->next;
            temp1=temp1->next;
            // nl=nl->next;
        }
        while(temp2!=NULL){
            nl->next=new ListNode(temp2->val);
             nl=nl->next;
            temp2=temp2->next;
            // nl=nl->next;
        }
        // newlist->next=NULL;
        return newlist->next;
        
    }
};
