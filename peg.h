#ifndef PEG_H
#define PEG_H

// LINKED LIST
class Node
{
    int ringSize = 0;
    Node *next = nullptr;
};

class LinkedList
{
    Node *head;

public:
    LinkedList();

    void pop();
};

// TOWER OF HANOI
class Tower
{
    // constructors
    Tower();
    Tower(int numberOfRings);

    LinkedList StackOfMoves;

    void moveRing();

    void undoMove();
    void redoMove();
    void displayPegs();
};

#endif