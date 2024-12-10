#include "Harddrive.h"
#include <string>
#include <iostream>


Harddrive::Harddrive(string brand, int capacity) {
    this->brand = brand;
    this->capacity = capacity;
    used = 0;
}


bool Harddrive::useSpace(int fileSize) {
    bool isSaved = false;
    if (capacity >= fileSize + used) {
        used += fileSize;
        isSaved = true;
    }
    return isSaved;
}


bool Harddrive::freeUpSpace(int fileSize) {
    bool isFreed = false;
    if (used >= fileSize) {
        used -= fileSize;
        isFreed = true;
    }
    return isFreed;
}


void Harddrive::printUsed() {
    cout << getUsed() << " used of " << getCapacity() << endl;
}

void Harddrive::printFree() {
    cout << getFree() << " free of " << getCapacity() << endl;
}