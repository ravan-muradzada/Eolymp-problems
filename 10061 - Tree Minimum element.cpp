TreeNode* Minimum(TreeNode *tree){
    TreeNode* temp = tree;
    while (temp->left != nullptr){
        temp = temp->left;
    }

    return temp;
}
