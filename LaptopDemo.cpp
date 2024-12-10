#include "Laptop.h"
#include "Harddrive.h"

#include <string>

using namespace std;

int main() {
    // declare variables
    string lapBrand;
    double lapSize;
    string hdBrand;
    int hdCapacity;

    // initialize laptop
    Laptop* personalLaptop = nullptr;
    Laptop schoolLaptop = Laptop("Dell", 15.6, "Seagate", 256000);

    // get user info
    cout << "Enter laptop brand: " << endl;
    cin >> lapBrand;
    cout << "Enter laptop screen size: " << endl;
    cin >> lapSize;
    cout << "Enter laptop hard drive brand: " << endl;
    cin >> hdBrand;
    cout << "Enter laptop hard drive capacity: " << endl;
    cin >> hdCapacity;

    // assign values to laptop
    personalLaptop = new Laptop(lapBrand, lapSize, hdBrand, hdCapacity);

    // print values to console
    cout << "--------------------------------" << endl;
    cout << "The schools's laptop" << endl;
    schoolLaptop.print();
    cout << "The student's laptop" << endl;
    (*personalLaptop).print();

    // perform file creation
    bool saveStatus = (*personalLaptop).createFiles(23456);
    if (saveStatus)
        cout << "Save completed" << endl;
    else
        cout << "Save failed" << endl;


    // perform file deletion
    bool deleteStatus = (*personalLaptop).freeUpSpace(12345);
    if (deleteStatus)
        cout << "Delete completed" << endl;
    else
        cout << "Delete failed" << endl;
    (*personalLaptop).printDriveInfo();

    // test copy constructor
    Laptop newLaptop = Laptop(*personalLaptop);
    newLaptop.setBrand("HP");
    newLaptop.setSize(16);

    // print results of copy to console
    cout << "The new laptop (using copy constructor): " << endl;
    newLaptop.print();

    // test overloaded equals
    Laptop myLaptop = newLaptop;

    // print results of copy using overloaded equals to console
    cout << "The new laptop (using overloaded =): " << endl;
    myLaptop.print();


    return 0;
}