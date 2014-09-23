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
