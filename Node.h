#ifndef NODE_H
#define NODE_H

/*

templates whoo! fill with any type. allows us to fill any type in here that we want!

https://www.geeksforgeeks.org/templates-cpp/

*/

template <typename T> class Node {
public:
    T data;
    Node<T>* link;
};

#endif