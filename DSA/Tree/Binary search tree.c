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
    if (root == NULL) return;
    display_inorder(root->left);
    printf("%d ", root->data);
    display_inorder(root->right);
}

void display_postorder(node* root) {
    if (root == NULL) return;
    display_postorder(root->left);
    display_postorder(root->right);
    printf("%d ", root->data);
}

void display_preoder(node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    display_preoder(root->left);
    display_preoder(root->right);
}

int main(){
    int pre_order[100], in_order[100], post_order[100];
    int n, i = 0;
    node* root = NULL;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    printf("Enter the in-order :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &in_order[i]);
    }

    printf("Enter the post-order :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &post_order[i]);
    }
    printf("Enter the pre-order :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &pre_order[i]);
    }
    
    printf("In-order traversal of the tree:\n");
    display_inorder(root);
    printf("\nPost-order traversal of the tree:\n");
    display_postorder(root);
    printf("\nPre-order traversal of the tree:\n");
    display_preoder(root);
    printf("\n");
}