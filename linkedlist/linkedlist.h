//
//  linkedlist.h
//  linkedlist
//
//  Created by sarthak shah on 9/23/14.
//  Copyright (c) 2014 SarthakWorks. All rights reserved.
//

#ifndef linkedlist_linkedlist_h
#define linkedlist_linkedlist_h
#include"node.h"
using namespace std;
class LinkedList{
public:
    LinkedList(){
        myHead=NULL;
        myTail=NULL;
    }
   void addItem(int N);
   void printlist();
   void sortlist();
   int deleteItem(int N);
   int mySize();
private:
    Node* myHead;
    int size=0;
    Node* myTail;
};

void LinkedList::addItem(int N)
{
    Node *nd= new Node();
    nd->data=N;
    if(myHead==NULL)
    {
        myHead=nd;
        myTail=nd;
        size++;
    }
    else
    {
        myTail->next=nd;
        size++;
        myTail=nd;
    }
}
int LinkedList::deleteItem(int N)
{
    Node* current;
    Node* prev;
    current=myHead;
    prev=myHead;
    if(current->data==N && size>1)
    {
        myHead=myHead->next;
        delete(current);
        size--;
        return 1;
    }
    while(current!=NULL)
    {
        if(current->data==N)
        {
            prev->next=current->next;
            delete(current);
            size--;
            return 1;
        }
        prev=current;
        current=current->next;
    }
    return 0;
}
void LinkedList::sortlist()
{
    Node *temp=NULL;
    Node *first=NULL;
    Node *current=myHead;
    Node *min=myHead;
    Node *prev=NULL;
    int flag=0;
    int i=0;
    for (i=0;i<size;i++)
    {
        while(current->next!=NULL)
        {
            if(min->data>current->next->data)
            {
                min=current->next;
                prev=current;
                flag=1;
            }
            current=current->next;
        }
    
        if(flag==1)
        {
        if(first==NULL)
        {
            temp=min->next;
            min->next=myHead->next;
            myHead->next=temp;
            prev->next=myHead;
            myHead=min;
            first=min;
            min=myHead->next;
            current=myHead->next;
            prev=myHead;
            flag=0;
        }
        else{
            temp=min->next;
            min->next=first->next->next;
            prev->next=first->next;
            first->next->next=temp;
            first->next=min;
            first=min;
            current=first->next;
            min=current;
            prev=first;
            flag=0;
        }
        }
        else{
            if(first==NULL)
            {
                current=myHead->next;
                min=current;
                prev=myHead;
                first=myHead;
            }
            else{
                current=first->next;
                prev=first;
                first=first->next;
                min=first;
            }
        }
    }
        
    
}
void LinkedList::printlist()
{
    Node *current;
    current=myHead;
    if(myHead==NULL)
    {
        cout<<"List is empty \n\n";
    }
    else
    {
        cout<<"List is :\n";
    while(current!=NULL)
    {
        cout<<current->data<<" \n";
        current=current->next;
    }
    }
    
}
int LinkedList::mySize()
{
    return size;
}

#endif
