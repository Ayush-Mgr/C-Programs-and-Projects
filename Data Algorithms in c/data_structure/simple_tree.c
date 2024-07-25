#include<stdio.h>
#include<stdlib.h>

struct tree{
    int data;
    struct tree* left;
    struct tree* right;
};

struct tree* GetNewNode(int data){
    struct tree* NewNode = (struct tree*)malloc(sizeof (struct tree));
    NewNode->data = data;
    NewNode->left = NULL;
    NewNode->right = NULL;

return NewNode;

}

void insert(struct tree** root, int data) {
    if (*root == NULL) {
        *root = GetNewNode(data);
    } else if (data >= (*root)->data) {
        insert(&((*root)->right), data);
    } else {
        insert(&((*root)->left), data);
    }
}

int main(){

struct tree* root=NULL; 

insert(&root,12);
insert(&root,23);
insert(&root,10);
int i;


/* to print: left most values 
while (root!=NULL)
{
    printf("%d ",root->data);
    root=root->left;
    i++;
    
}

*/


return 0;

}
