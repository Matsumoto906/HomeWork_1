#include <iostream>
#include <bitset>

using namespace std;
using std::bitset;

string f(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    
    int n;
    cin >> n;
    bitset<8> x(n);
    cout << x << endl;

    return 0;}