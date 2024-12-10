#include "Harddrive.h"
#include <vector>

int main() {
    Harddrive c_drive = Harddrive("Toshiba", 200000);
    cout << c_drive.getBrand() << endl;
    bool saveStatus = c_drive.useSpace(12345);
    if (saveStatus)
        cout << "Save completed" << endl;
    else
        cout << "Save failed" << endl;
    bool deleteStatus = c_drive.freeUpSpace(234567);
    if (deleteStatus)
        cout << "Delete completed" << endl;
    else
        cout << "Delete failed" << endl;
    saveStatus = c_drive.useSpace(234567);
    if (saveStatus)
        cout << "Save completed" << endl;
    else
        cout << "Save failed" << endl;
    c_drive.printUsed();

    vector<Harddrive> harddrives = { Harddrive("Dell", 500000), Harddrive("Apple", 500000) };
    harddrives.push_back(c_drive);
    harddrives.push_back(Harddrive("Western Digital", 124000));
    harddrives.at(0).printFree();
    harddrives.at(1).printFree();
    return 0;
}