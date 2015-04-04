#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "AVL.h"

int main()
{
    NodeT *q=0;
    float key,nod1=0;
    FILE *f;
    f=fopen("in.txt","r");
    while(!feof(f))
    {
        fscanf(f,"%f",&key);
        q=creare(q,key);
    }
    printf("\n In preorder:");
    preorder(q);
    printf("\n In postorder:");
    postorder(q);
    printf("\n In inorder:");
    inorder(q);
    printf("\n \n\n");
    prettyPrint(q,0);
    printf("\n\nThe node you want to be inserted:\n");
    scanf("%f",&nod1);
    printf("\n\n ");
    inserare(q,nod1);
    printf("\n In preorder:");
    preorder(q);
    printf("\n In postorder:");
    postorder(q);
    printf("\n In inorder:");
    inorder(q);
    printf("\n\n \n");
    prettyPrint(q,0);

    return 0;
}
