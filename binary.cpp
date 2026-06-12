#include <iostream>
using namespace std;

class Node {
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    Node(string i, Node* l, Node* r) {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree {
    public:
    Node* root;
    BinaryTree() {
        root = nullptr;
    }
void insert(string element) {
    Node*newNode = new Node(element, nullptr, nullptr);
    newNode->info = element;
    newNode->leftchild = nullptr;
    newNode->rightchild = nullptr;

    Node* parent = nullptr;
    Node* currentNode = nullptr;
    search(element, parent, currentNode);