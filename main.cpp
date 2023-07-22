#include <iostream>
#include "features/Node.h"
#include "features/features.h"
using namespace std;

void menu (Node*& start);

int main() {
    Node* start = NULL;
    initiate(start);
    menu(start);
    deAllocAll(start);
    return 0;
}

void menu (Node*& start) {
    while (true) {
        int choice = 0;
        cout << "1. Them vao danh sach.\n";
        cout << "2. Xuat danh sach dang Left - Node - Right.\n";
        cout << "3. Xuat danh sach dang Node - Left - Right.\n";
        cout << "4. Xuat danh sach dang Left - Right - Node.\n";
        cout << "5. Xoa phan tu.\n";
        cout << "6. Thoat.\n";

        while (choice > 6 || choice < 1) {
            cout << "Nhap lua chon cua ban: ";
            cin >> choice;
        }

        switch (choice) {
            case 1:
                addNode(start);
                continue;
            case 2:
                lnrShow(start);
                continue;
            case 3:
                nlrShow(start);
                continue;
            case 4:
                lrnShow(start);
                continue;
            case 5:
                deleteNode(start);
                continue;
            case 6:
                break;
        }
        break;
    }
}
