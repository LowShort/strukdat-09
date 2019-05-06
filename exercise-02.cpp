/*
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Kelas : B
* Deskripsi : Reversing a word using Stack Linked List
* Tgl : 03 05 2019
*/

#include <iostream>
#include <string>
using namespace std;

typedef struct stack
{
    char isi;
    stack *next;
}   *stk, *ptr;

void newNode(ptr &pNew, char fill)
{
    pNew = new stack;
    pNew->isi=fill;
    pNew->next = NULL;
}

void push(stk &head, ptr pNew)
{
    if(head==NULL)
        head = pNew;

    else
    {
        pNew->next = head;
        head = pNew;
    }
}

void pop(stk &head, ptr &pSav)
{
    if(head==NULL)
        cout << "STACK EMPTY!\n";

    else if(head->next==NULL)
    {
        pSav=head;
        head=NULL;
    }

    else
    {
        pSav = head;
        head = pSav->next;
        pSav->next = NULL;
    }
}

int main()
{
    stk S=NULL;
    ptr p=NULL;
    
    for(char i='A'; i<='E'; i++)
    {
        newNode(p,i);
        push(S,p);
    }

    do
    {
        pop(S,p);
        cout << p->isi << "\n";
    }while(S!=NULL);
}