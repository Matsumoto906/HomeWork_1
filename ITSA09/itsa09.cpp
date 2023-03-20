#include <iostream>
using namespace std;

int main() {  
    int a,i,j;   
    i=0;      
    j=1;        
    cin >> a;    
    for (; j<=a; j++)  
    {
        if (j%3==0)     
        {
            i+=j;       
        }
    }
    cout << i <<endl;   

    return 0;   
}