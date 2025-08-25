// 6. Calculate the simple interest
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, SI;
    cout << "Enter principal amt, rate of interest and time: ";
    cin >> principal >> rate >> time;
    SI = (principal * rate * time) / 100;
    cout << "Simple Interest is " << SI << endl;
    return 0;
}
