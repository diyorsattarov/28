#ifndef LIST_H
#define LIST_H

#include <node/node.h>

template <class T>
class List {
private:
    Node<T> *head, *tail;
public:
    ~List();
    List();
    List(const List& source);
};

#endif