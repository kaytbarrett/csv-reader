#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std; 

int main() {

    ifstream myfile;
    myfile.open("data.csv");

    string myline;

    if (myfile.is_open()){
        while (myfile){
            getline (myfile, myline);
            cout << myline << '\n';
        }
        myfile.close();
    } else {
        cout << "Couldn't open file";
        }

    return 0;

}
   


