#include <iostream>
#include <bitset>

using namespace std;
using std::bitset;

string toBinary(int n)
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
    bitset<8> bs(n);
    cout << bs << endl;

    return 0;}