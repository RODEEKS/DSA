#include <stdio.h>
#include <stdlib.h>
 
/* A binary tree node has data, pointer to left child
 and a pointer to right child */
struct node {
    int data;
    struct node* left;
    struct node* right;
};
 
/* Helper function that allocates a new node with the
 given data and NULL left and right pointers. */
struct node* newNode(int data) {
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
 
/* Given a binary tree, print its nodes according to the
 "bottom-up" postorder traversal. */
void printPostorder(struct node* node) {
    if (node == NULL)
        return;
 
    // first recur on left subtree
    printPostorder(node->left);
 
    // then recur on right subtree
    printPostorder(node->right);
 
    // now deal with the node
    printf("%d ", node->data);
}
 
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node) {
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    printf("%d ", node->data);
 
    /* now recur on right child */
    printInorder(node->right);
}
 
/* Given a binary tree, print its nodes in inorder*/
void printPreorder(struct node* node) {
    if (node == NULL)
        return;
 
    /* first print data of node */
    printf("%d ", node->data);
 
    /* then recur on left sutree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}
 
/* Driver program to test above functions*/
int main() {
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    printf("\n Preorder traversal of binary tree is \n");
    printPreorder(root);
 
    printf("\n Inorder traversal of binary tree is \n");
    printInorder(root);
 
    printf("\n Postorder traversal of binary tree is \n");
    printPostorder(root);
 
    getchar();
    return 0;
}



/*
OUTPUT :

 Preorder traversal of binary tree is 
1 2 4 5 3 
 Inorder traversal of binary tree is 
4 2 5 1 3 
 Postorder traversal of binary tree is 
4 5 2 3 1

*/
