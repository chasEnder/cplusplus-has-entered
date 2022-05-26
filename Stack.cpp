#include "Stack.h"

/**
 * Push a value onto the stack
 *
 * @param data
 */
template <typename T> void Stack<T>::push(T data) {
    return;
}

/**
 * Is the stack empty
 *
 * @return true if the stack has 0 elements
 */
template <typename T> bool Stack<T>::isEmpty() {
    return false;
}

/**
 * Length of a Linked List
 * 
 * @return the length of the linked list
 */
template <typename T> int Stack<T>::len() {

}

/**
 * Peek at the top stored value of the stack
 *
 * @return value of templated type ontop of the stack. throw an error if empty
 */
template <typename T> T Stack<T>::peek() {
    return -1; // we need to really throw an error if the stack is empty when we do this
}

/**
 * Pop the top value from the stack
 *
 */
template <typename T> void Stack<T>::pop() {
    return;
}