#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class node 
{ 
    public:
    int data; //the data
    node* left, *right; //left and right child node pointers 
}; 
 
/* Function decalarations */
void printGivenLevel(node* root, int level); //function to print nodes at a certain level we choose
int height(node* node); //compute the height of the tree 
node* newNode(int data);  //function to create new nodes
void printLevelOrder(node* root);

//insertion functions 
void insertion_sort(int a[], int size); //sorting algorithm to insert correct value in its place
//in ascending order 
void print(int a[], int size); //print function to print sorted values 

//map





