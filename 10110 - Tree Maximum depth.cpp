int maxDepth(TreeNode *tree){
    if (tree == nullptr) return 0;
    int leftPart = maxDepth(tree->left);
    int rightPart = maxDepth(tree->right);
    return 1 + max(leftPart, rightPart);
}
