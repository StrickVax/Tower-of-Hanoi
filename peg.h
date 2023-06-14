#ifndef PEG_H
#define PEG_H

class Node
{
    int ringSize = 0;
    Node *next = nullptr;
};

class LinkedList
{
    Node *head;
    LinkedList();
};

#endif