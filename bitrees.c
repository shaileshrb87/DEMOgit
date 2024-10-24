#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * left=NULL;
    struct node *right=NULL;

};
struct node createNode(int data ){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->left;
    n->right;
    n->data;
    return n;
}
int main() {
    struct node *p=createNode(45);
     struct node *p1=createNode(54);
      struct node *p2=createNode(5);
       p->left=p1;
       p->right=p2;
   return 0;
}