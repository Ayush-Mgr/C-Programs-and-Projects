#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool search(struct tree* root, int data) {
    if (root == NULL) {
        return false;
    } else if (root->data == data) {
        return true;
    } else if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

int main(){
int se;
struct tree* root=NULL; 

insert(&root,12);
insert(&root,23);
insert(&root,10);
insert(&root,6);
insert(&root,9);
insert(&root,15);
insert(&root,13);



printf("enter number to search :\n");
scanf("%d",&se);
if(search(root,se) == true){
    printf("the suff is there \n");
}
else{
    printf("the suff is NOT there \n");
    
}




/* to print: left most values 
int i = 1;

while (root!=NULL)
{
    printf("%d ",root->data);
    root=root->left;
    i++;
    
}

*/
return 0;

}

