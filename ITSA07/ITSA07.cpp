#include <iostream>
using namespace std;

int main(){

    int _,i;
    cin >> _;
    for (i=0;i<_;i++){
        char key;
        int a,b,c,d;
        cin >> key >> a >> b >> c >> d;
        
        if (key == '+'){
            cout << a+c <<' ' << b+d <<endl;
        }
        else if (key == '-'){
            cout << a-c <<' '<< b-d <<endl;
        }
        else if (key == '*'){
            cout << a*c-b*d <<' ' << a*d+b*c <<endl;
        }
        
    }

    return 0;
}