//
//  node.h
//  linkedlist
//
//  Created by sarthak shah on 9/23/14.
//  Copyright (c) 2014 SarthakWorks. All rights reserved.
//
#ifndef linkedlist_node_h
#define linkedlist_node_h
#include<string>
using namespace std;
class Node{
    friend class LinkedList;
    Node(){
        this->next=NULL;
    }
private:
    int data;
    Node* next;
};

#endif
