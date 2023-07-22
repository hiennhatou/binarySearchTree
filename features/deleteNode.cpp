#include<iostream>
#include "Node.h"
#include "../utils/utils.h"
using namespace std;

void deleteNode(Node*& start) {
    int value;
    if (start == NULL) {
        cout << "Danh sach rong.\n";
        return;
    }

    cout << "Nhap gia tri can xoa: ";
    cin >> value;

    if (remove(start, value) != 1) cout << "Khong co gia tri de xoa\n";
}
