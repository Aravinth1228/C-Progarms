#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} node;

void createNode(node** root) {
    int data;
    printf("Enter node : ");
    scanf("%d", &data);
    if (data == -1) {
        *root = NULL;
        return;
    }
    *root = (node*)malloc(sizeof(node));
    (*root)->data = data;
    printf("Enter the left node  %d:\n", data);
    createNode(&((*root)->left));
    printf("Enter the right node %d:\n", data);
    createNode(&((*root)->right));
}
void display_inorder(node* root) {
    if (root == NULL) {
        return;
    }
    display_inorder(root->left);
    printf("%d ", root->data);
    display_inorder(root->right);
}
void display_postorder(node* root) {
    if (root == NULL) {
        return;
    }
    display_postorder(root->left);
    display_postorder(root->right);
    printf("%d ", root->data);
}
void display_preoder(node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    display_preoder(root->left);
    display_preoder(root->right);
}

void delete(){
    
}
int main(){
    node* root = NULL;
    createNode(&root);
    printf("In-order traversal of the tree:\n");
    display_inorder(root);
    display_postorder(root);
    display_preoder(root);
    printf("\n");
    
    return 0;
}