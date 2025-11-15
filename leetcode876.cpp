//brute force approach:
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp= head;
        int count=0;
        int midnode=0;
        int checker=1;
        while(temp != NULL){
            count++;
            temp= temp->next;
        }
        if(count%2==0){
        midnode= (count/2)+1;
        }else{
            midnode= (count+1)/2;
        }
        temp=head;
        while(temp!= NULL){
            if(checker==midnode ){
                return temp;
            }
            temp=temp->next;
            checker++;
        }
        return 0;
    }
};


//SLOW AND FAST APPROACH (TORTOISE AND HARE ALG)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast=head;
        while(fast !=NULL && fast->next!= NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
};
