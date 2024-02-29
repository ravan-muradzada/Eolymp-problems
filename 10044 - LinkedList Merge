ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* newHead = new ListNode(0);
        ListNode* ptr = newHead;
        while (list1 != nullptr || list2 != nullptr){
            if (list1 != nullptr && (list2 == nullptr || list1->val <= list2->val)){
                ptr->next = list1;
                list1 = list1->next;
            }else{
                ptr->next = list2;
                list2 = list2->next; 
            }
            ptr = ptr->next;
        }
        
        return newHead->next;
    }
