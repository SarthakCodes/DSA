//
//  main.cpp
//  linkedlist
//
//  Created by sarthak shah on 9/23/14.
//  Copyright (c) 2014 SarthakWorks. All rights reserved.
//

#include <iostream>
#include"linkedlist.h"
using namespace std;
int main() {
    LinkedList L;
    int i;
    for(i=3;i>0;i--)
    {
        L.addItem(20*i);
    }
    L.printlist();
    L.deleteItem(20);
    L.printlist();
    // insert code here...
    
    return 0;
}
