// 3. Take a name as input and print "Welcome, [name]!"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Welcome, " << name << "!" << endl;
    return 0;
}
