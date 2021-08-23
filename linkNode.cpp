#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef struct Nodes 
{
    int value;
    struct Nodes *next;
}Lnode;

void reserve_node(Lnode *pHead) //链表逆置
{
  auto p = pHead->next;
  auto q = p->next;
  while(q)
  {
      auto t = q->next;
      q->next =p;
      p=q;
      q=t;
  }
  pHead->next->next=NULL;
  pHead->next=p;
}

void show_node(Lnode *pHead)
{
  auto   pTmp=pHead->next;
    while(pTmp)
   {
       if (pTmp->next!=NULL)
       cout<<pTmp->value<<"-->";
       else

       cout<<pTmp->value<<endl;
       pTmp=pTmp->next;
   }
}

void deleteNode (Lnode *pHead,int val)
{
     auto pTmp = pHead->next;
     auto qTmp = pHead;
     while(pTmp)
     {
         if(pTmp->value ==val)
         {
             
             qTmp->next=pTmp->next;
             delete  pTmp;
         }
         pTmp=pTmp->next;
         qTmp=qTmp ->next;
     }

}

int main(int argc, char ** argv) 
{
    srand(time(NULL));
    Lnode *pHead = new Lnode();
    Lnode *pTail = pHead;
    for(int i = 0; i<10 ;i++)
    {
         Lnode *pNew = new Lnode();
         pNew->value =i;
         pTail->next=pNew;
         pNew->next=NULL;
         pTail=pNew;   
    }
  show_node(pHead);

  Lnode *pAdd = new Lnode;
  pAdd->value=11;
  pAdd->next=pHead->next;
  pHead->next=pAdd;
   
     show_node(pHead);

    
deleteNode(pHead,6);
     show_node(pHead);
//    cout<<endl;

//   reserve_node(pHead);

//    show_node(pHead);
    return 0;
}