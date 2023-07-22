#include<iostream>
#include<fstream>
#include "Node.h"
#include "../utils/utils.h"
#include "features.h"
using namespace std;

void initiate(Node*& start) {
    int n;
    ifstream IFile("../data/data.txt");
    if (!IFile) {
        cout << "Not Found File.\n";
        exit(0);
    }

    IFile >> n;

    for(int i = 0; i < n; i++) {
        int newValue;
        IFile >> newValue;
        add(start, newValue);
    }

    IFile.close();
};
