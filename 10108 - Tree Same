bool isSame(TreeNode* tree1, TreeNode* tree2) {
    if (!tree1 && !tree2)
        return true;
    if (!tree1 || !tree2)
        return false;
    return (tree1->val == tree2->val) && isSame(tree1->left, tree2->left) && isSame(tree1->right, tree2->right);
}
