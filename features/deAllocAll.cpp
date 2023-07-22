#include<iostream>
#include "Node.h"
using namespace std;

void deAllocAll(Node*& node) {
    Node* left = node->left;
    Node* right = node->right;
    delete node;
    if(left != NULL) deAllocAll(left);
    if(right != NULL) deAllocAll(right);
}