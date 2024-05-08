ListNode* detectCycle(ListNode *head){
    ListNode* slowPtr = head,*fastPtr = head;
    do{
        fastPtr = fastPtr->next->next;
        slowPtr = slowPtr->next;
        if (fastPtr == nullptr || fastPtr->next == nullptr) return nullptr;
    }while (fastPtr != slowPtr);
    fastPtr = head;
    while (fastPtr != slowPtr){
        fastPtr = fastPtr->next;
        slowPtr = slowPtr->next;
    }
    return slowPtr;
}
