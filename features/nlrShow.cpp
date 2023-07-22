#include<iostream>
#include "Node.h"
using namespace std;

// Node-Left-Right
void nlrShow(Node* node) {
    cout << node->value << endl;
    if(node->left != NULL) nlrShow(node->left);
    if(node->right != NULL) nlrShow(node->right);
}