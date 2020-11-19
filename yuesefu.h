#ifndef yuesefu_h
#define yuesefu_h

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef int dataType;

typedef struct node {
		dataType data;
			struct node *next;
}node,LinkList;
LinkList* CreateList()；
void Insert(LinkList *l,int k,dataType x)；
void Delete(LinkList *l,int k)；
int Empty(LinkList *l)；
dataType GetData(LinkList *l,int k);
node* Find(LinkList *l,dataType x);
void Print(LinkList *l);
void ClearList(LinkList *l);
void yuesefu ();

#define n 11
#define m 3
#endif
