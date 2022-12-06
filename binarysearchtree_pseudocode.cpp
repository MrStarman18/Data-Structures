class Tree {
    class Node {
    public:
        int value;
        Node * left;    //Points to left child (usually smaller)
        Node * right;   //Points to right child (usually larger)
    };

    TreeNode * root;
};

//Inserting:
if tree is empty
    root = new node
else
    walk tree by comparing value at each node 
        moving left or right down the tree depending on comparison
    add new node as left or right to maintain order

//Searching:
if subtree is null
    return null                            // the values does not exist
if subtree.value = value
    return subtree                         // we found it
if value < subtree.value
    return search(subtree.left,value)      // look in left "half"
else
    return search(subtree.right,value)     // look in right "half"

//Removing
Unfortunately, deletion of a node from a binary tree while maintaining its order can be tricky; we must consider three cases, 
the first two are easy, but the third is complex:

if the node has no children: simply remove the node,

if the node has only one child: replace the node with its child, or

if the node has two children: replace the value of the current node with the value of its successor node (next node in order), 
then remove the successor node (it will be one of the first two cases).