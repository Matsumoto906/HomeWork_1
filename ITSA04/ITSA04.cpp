#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    /*120 240 240*/
    int h1,a,h2,b,n,ans=0;
    cin >> h1 >> a;
    cin >> h2 >> b;
    
    a += h1 * 60;
    b += h2 * 60;
    
    if (b <= a)
        b+=1440;
    
    n = b - a;

    if (n>240){
        n -= 240;
        ans += (n/30) * 60 + 160+120;
    }
    
    else if (n>120){
        n -= 120;
        ans += (n/30) * 40 +120;
    }
    
    else if (n>0 && n<=120){
        ans += (n/30) * 30;
    }
    
    cout << ans << endl;

}