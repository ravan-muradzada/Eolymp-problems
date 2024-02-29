ListNode *intersection(ListNode *l1, ListNode *l2) {
        ListNode* firstPtr = l1;
        ListNode* secondPtr = l2;
        while (firstPtr != secondPtr){
            if (firstPtr == secondPtr)
                break;
            if (firstPtr == nullptr){
                firstPtr = l1;
            }else firstPtr = firstPtr->next;

            if (secondPtr == nullptr){
                secondPtr = l2;
            }else secondPtr = secondPtr->next;
        }
        return firstPtr;
    }
