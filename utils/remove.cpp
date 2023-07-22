#include<iostream>
#include "../features/Node.h"
using namespace std;

void removeTwoLevel (Node*& target, Node*& current) {
    if (target->left != NULL) {
        removeTwoLevel(target, current->left);
    } else {
        target->value = current->value;
        Node* temp = current;
        current = current->right;
        delete temp;
    }
}

int remove(Node*& current, int value) {
    if (current == NULL) return -1;
    if (current->value == value) {
        Node *temp;
        if (current->left == NULL) {
            temp = current;
            current = current->right;
        } else if (current->right == NULL) {
            temp = current;
            current = current->left;
        } else {
            removeTwoLevel(current, current->left);
        }
        delete temp;
    } else {
        if (current->value < value) {
            remove(current->right, value);
        } else {
            remove(current->left, value);
        }
    }

    return 1;
}