#include "binary.h"
//#include "map.h"
using namespace std;
/* Function to print level 
order traversal of a binary tree*/
void printLevelOrder(node* root) //level order - breadth by search meaning in order
{ 
    int h = height(root); //root is the height 
    int i; 
    for (i = 1; i <= h; i++) //height is 1, i is less than height of tree 
        printGivenLevel(root, i);  //print root and i which is levels 
} 
 
/* Print nodes at a given level in the tree */
void printGivenLevel(node* root, int level) 
{ 
    if (root == NULL) 
        return; 
    if (level == 1)  //if the tree is only a level of one, print 
        cout << root->data << " "; //print 
    else if (level > 1) //if its greater than 1
    { 
        printGivenLevel(root->left, level-1); //print levels to the left - root level
        printGivenLevel(root->right, level-1); //print levels to the right - root level
    } 
} 
 
/* Compute the "height" of a tree -- the number of 
    nodes along the longest path from the root node 
    down to the farthest leaf node.*/
int height(node* node) 
{ 
    if (node == NULL) 
        return 0; 
    else
    { 
        /* compute the height of each subtree */
        int lheight = height(node->left);  //get the left height by adding the levels of left nodes
        int rheight = height(node->right); //gets right height by adding the levels of right nodes
 
        /* use the larger one */
        if (lheight > rheight) //adds 1 to whichever height is higher to count root 
            return(lheight + 1); 
        else return(rheight + 1); 
    } 
} 
 
/* Helper function that allocates 
a new node with the given data and
NULL left and right pointers. */
node* newNode(int data) 
{ 
    node* Node = new node(); //creates a new node
    Node->data = data; //sets it to the data input
    Node->left = NULL; //left is EMPTY
    Node->right = NULL; //right is empty
 
    return(Node); //return the node 
} 

