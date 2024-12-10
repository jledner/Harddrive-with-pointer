#ifndef Laptop_H
#define Laptop_H

#include <string>
#include <iostream>
#include "Harddrive.h"

using namespace std;

class Laptop {
private:
    double size;
    Harddrive* drive;
    string brand;
public:
    Laptop(string b, double s, string hb, int hs) : size(s), brand(b) {
        drive = new Harddrive(hb, hs);
    }
    Laptop(const Laptop& other);
    const Laptop& operator=(const Laptop&);
    string getBrand() { return brand; }
    double getSize() { return size; }
    void setBrand(string s) { brand = s; }
    void setSize(int s) { size = s; }
    bool createFiles(double);
    bool freeUpSpace(double);
    void printDriveInfo();
    void print();
};


#endif