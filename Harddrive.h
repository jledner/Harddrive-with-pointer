#ifndef HARDDRIVE_H
#define HARDDRIVE_H

#include <string>
#include <iostream>

using namespace std;

class Harddrive {
private:
    int capacity;
    int used;
    string brand;
public:
    Harddrive() { brand = "";  capacity = 0; };
    Harddrive(string, int);
    string getBrand() { return brand; }
    int getCapacity() { return capacity; }
    int getUsed() { return used; }
    int getFree() { return getCapacity() - getUsed(); }
    bool useSpace(int sizeOfFile);
    bool freeUpSpace(int sizeOfFile);
    void printFree();
    void printUsed();
};


#endif