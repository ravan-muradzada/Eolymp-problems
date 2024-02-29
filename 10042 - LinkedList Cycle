int hasCycle(ListNode *head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        while ((fastPtr != nullptr) && (fastPtr->next != nullptr)){
            slowPtr = slowPtr->next;
            fastPtr = (fastPtr->next)->next;
            if (slowPtr == fastPtr){
                return 1;
            }
        }
        return 0;
}
