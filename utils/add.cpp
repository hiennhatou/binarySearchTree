#include<iostream>
#include "../features/Node.h"
using namespace std;

void add(Node*& start, int value) {
    Node* newNode = new Node({ value });

    if (start == NULL) {
        start = newNode;
        return;
    }

    Node* current = start;
    while(true) {
        if (current->value == newNode->value) {
            delete newNode;
            break;
        }

        if (current->value > newNode->value) {
            if (current->left == NULL) {
                current->left = newNode;
                break;
            }
            current = current->left;
            continue;
        }

        if (current->value < newNode->value) {
            if (current->right == NULL) {
                current->right = newNode;
                break;
            }
            current = current->right;
            continue;
        }
    }
}