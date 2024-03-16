TreeNode* Find(TreeNode *tree, int element){
    TreeNode* temp = tree;
    while (temp != nullptr){
        if (temp->val > element){
            temp = temp->left;
        }else if (temp->val < element){
            temp = temp->right;
        }else return temp;
    }
    return nullptr;
}
