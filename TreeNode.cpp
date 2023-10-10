#include "TreeNode.h"

TreeNode::TreeNode() : val(0), rightChild(nullptr), leftChild(nullptr) {}
TreeNode::TreeNode(int val) : val(val), rightChild(nullptr), leftChild(nullptr) {}
bool isSameTree(TreeNode *p, TreeNode *q){
        if (p && q  == nullptr ) return true; 
        if( p || q != nullptr ) return false; 

    return false; 
}