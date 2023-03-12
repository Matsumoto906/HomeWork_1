#include <iostream>  
#include <cmath>  
using namespace std;  
int main (){  
    int a,b;  
    cin >> a >> b ;  
    if (sqrt(a*a+b*b)<100)  
    {  
        cout << "inside" << endl;  
    }  
    else  
    {  
         cout << "outside" << endl;  
    }  
        return 0;  
}  