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

    if (parent == nullptr){
        root == newNode;
        return;
    }
    if (element < parent->info)
    {
        parent->leftchild = newNode;
    } 
    else
    {
        parent->rightchild = newNode;
    }
}
void search(string element, Node*& parent, Node*& currentNode) {
    currentNode = root;
    parent = nullptr;

    while (currentNode != nullptr && currentNode->info != element) 
    {
        parent = currentNode;
        if (element < currentNode->info) {
            currentNode = currentNode->leftchild;
        } else {
            currentNode = currentNode->rightchild;
        }
    }
}

void inorder(Node* ptr){
    if (ptr != nullptr) {
        cout << "tree is empty" << endl;
        return;
    }
    if (ptr != nullptr) {
        inorder(ptr->leftchild);
        cout << ptr->info << " ";
        inorder(ptr->rightchild);
    }
}

void preorder(Node* ptr){
    if (ptr != nullptr) {
        cout << "tree is empty" << endl;
        return;
    }
    if (ptr != nullptr) {
        cout << ptr->info << " ";
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);
    }
}