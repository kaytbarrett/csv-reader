#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std; 

vector<string> split(string s, char delim){
    vector<string> tokens;
    stringstream ss(s);
    string token;

    while(getline(ss, token, delim)){
        tokens.push_back(token);
    }

    return tokens;
}

int main() {

    ifstream myfile;
    myfile.open("data.csv");
    if (!myfile.is_open()){
        cout << "Error opening file" << endl;
        return 1;
    }

    string line;
    while (getline(myfile, line)){
        vector<string> fields = split(line, ',');
          
        for (const auto &field : fields){
        cout << field << " ";
        }
        cout << endl;
    }

    myfile.close();

    return 0;

}
   


