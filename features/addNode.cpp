#include<iostream>
#include "Node.h"
#include "../utils/utils.h"
#include "features.h"
using namespace std;

void addNode(Node* start){
    int newValue;
    cout << "Nhap gia tri can nhap: ";
    cin >> newValue;
    add(start, newValue);
}