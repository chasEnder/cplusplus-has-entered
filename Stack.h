#ifndef OURSTACK_H
#define OURSTACK_H

#include <string>
#include "Node.h"

template <typename T> class Stack {
private:
    Node<T>* top;

public:
    // TODO: impliment each of these. geeks for geeks is a good resource just make sure you understand what you are 
    // doing with your pointers and such. I will answer a question from your note below
    void push(T data);
    bool isEmpty();
    int len();
    T peek();
    void pop();
};

#endif


/*

- Regarding this video on linked lists, it mentions being able to insert data easier since we just have to adjust 
the pointer of April to route to Bob’s and then point from Bob to Chris. While this sorta makes sense for an alphabetized 
list, with a list of let’s say 1 million contacts, how would you know automatically which nodes you’d need to insert in
between? Or are you required to do a little searching in the case of alphabetization? Seems like it might take a while 
to do that especially if you’re needing to insert, let’s say 10,000 contacts? What am I missing intuitively here?

yeah lets consider a sorted list. and say we don't know how many contacts we need to sort. Linked lists dont care about the size. 
you search down your list and then insert your new data. boom linked list is done. the insertion is "fixed time" which is wonderful. 
look up big O notation. isnertion for linked lists is O(1) at current point plus however long it took you to find your position.

now take an array implimentation. you iterate through your array until you find your element. and add it. but wait. in order to add a
new piece of data in order you have to slide everything after this point back. insertion in array list is O(n/2) on average. if you
have 10,000 data entries that is an insertion time of O(5,000) vs O(1).

also consdier running out of space in an array (something that doesn't happen with linked lists). the way we increase the size of an
array is by creating a new array. and copying ALL of the data over. takes O(n) every time. big operation, big chunk of data. linked 
lists are light weight in that they dont have to have sequential slots in memory. they can take up space whereever it is free.

*/

