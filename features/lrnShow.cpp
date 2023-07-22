#include<iostream>
#include "Node.h"
using namespace std;

// Left-Right-Node
void lrnShow(Node* node) {
    if(node->left != NULL) lrnShow(node->left);
    if(node->right != NULL) lrnShow(node->right);
    cout << node->value << endl;
}