#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int compare(tree R,tree R2)
{
    if((R==NULL)&&(R2==NULL)) return 1;
    else if (R->val!=R2->val) return 0 ;
    else
    {
     return compare(R->l,R2->l) && compare(R->r,R2->r);
    }
}


tree add(tree R,int val)
{
    struct node* neww;
    if(R==NULL)
    {
        neww=(struct node*)malloc(sizeof(struct node));
        neww->val=val;
        neww->l=NULL;
        neww->r=NULL;
        R=neww;
    }
    else
    {
        if(val<=R->val)  R->l=add(R->l,val);
        else  R->r=add(R->r,val);
    }
    return R;
}

int main()
{
    tree R=NULL ;
    tree R2=NULL;
    int i,val ;

     // to fill a tree with 7 nodes for example
     for(i=1;i<=7;i++)
    {
        printf("val of tree1= ");
        scanf("%d",&val);
        R=add(R,val);
    }

        printf("\n");

    // to fill a secpnd tree with 7 nodes for example
    for(i=1;i<=7;i++)
    {
        printf("val of tree2= ");
        scanf("%d",&val);
        R2=add(R2,val);
    }

    printf("%d",compare(R,R2));
    return 0;
}













