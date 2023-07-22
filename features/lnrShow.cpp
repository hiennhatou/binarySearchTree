#include<iostream>
#include "Node.h"
using namespace std;

// Left-Node-Right
void lnrShow(Node* node) {
    if(node->left != NULL) lnrShow(node->left);
    cout << node->value << endl;
    if(node->right != NULL) lnrShow(node->right);
}