#include "Laptop.h"


Laptop::Laptop(const Laptop& other) {
    brand = other.brand;
    size = other.size;
    if (other.drive != nullptr) {
        drive = new Harddrive(other.drive->getBrand(), other.drive->getCapacity());
    }
    else {
        drive = nullptr;
    }
}

const Laptop& Laptop::operator=(const Laptop& other) {
    if (this != &other) {
        brand = other.brand;
        size = other.size;
        delete drive;
        if (other.drive != nullptr) {
            drive = new Harddrive(other.drive->getBrand(), other.drive->getCapacity());
        }
        else {
            drive = nullptr;
        }
    }
    return *this;
}

bool Laptop::createFiles(double fileSize) {
    bool isFileCreated = (*drive).useSpace(fileSize);
    return isFileCreated;
}

bool Laptop::freeUpSpace(double fileSize) {
    bool isSpaceFreed = (*drive).freeUpSpace(fileSize);
    return isSpaceFreed;
}

void Laptop::printDriveInfo() {
    cout << "Drive brand: " << (*drive).getBrand() << endl;
    (*drive).printUsed();
}

void Laptop::print() {
    cout << "Laptop brand: " << getBrand() << endl;
    cout << "Laptop size: " << getSize() << endl;
    printDriveInfo();
}