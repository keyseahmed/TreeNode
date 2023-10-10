#ifndef TREENODE_H
#define	TREENODE_H
class TreeNode
{
public:
	int val; 
	TreeNode* leftChild; 
	TreeNode* rightChild; 
public:
	TreeNode(); 
	TreeNode(int val);
    bool isSameTree(TreeNode *p, TreeNode *q); 
};

#endif