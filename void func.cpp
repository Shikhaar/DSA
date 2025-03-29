#include<iostream>
using namespace std;
 
void printname(string name) {
    cout << "hey! " << name << endl;
}

int main() {
    string name;
    cin >> name;
    printname(name);
    return 0;
}