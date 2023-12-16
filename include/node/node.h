#ifndef NODE_H
#define NODE_H

template <class T>
class Node {
private:
    T nObj;
    Node *next, *prev;
public:
    ~Node() = default;
    Node() : next(nullptr), prev(nullptr) {}
    Node(T obj, Node* nextPtr = nullptr, Node* prevPtr = nullptr) : nObj(obj), next(nextPtr), prev(prevPtr) {}
    T getData() const { return nObj; }
    Node* getNext() const { return next; }
    Node* getPrev() const { return prev; }
    void setData(T value) { nObj = value; }
    void setNext(Node* nextPtr) { next = nextPtr; }
    void setPrev(Node* prevPtr) { prev = prevPtr; }
};

#endif