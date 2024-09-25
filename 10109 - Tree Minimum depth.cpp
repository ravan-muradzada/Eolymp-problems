int minDepth(TreeNode* tree){
    if (tree == NULL) return 0;
    if (tree->left == NULL) return minDepth(tree->right) + 1;
    if (tree->right == NULL) return minDepth(tree->left) + 1;
    
    int leftPart = minDepth(tree->left);
    int rightPart = minDepth(tree->right);
    return min(leftPart, rightPart) + 1;
}
 
