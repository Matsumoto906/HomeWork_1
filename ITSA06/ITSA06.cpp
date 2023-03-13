#include <iostream> 
using namespace std;    

int main()    
{    
    int M;
    while( cin >> M )    
    {    
        if (M>=3 and M<=5)    
        {    
            cout << "Spring" << endl;    
        }    
        if (M>=6 and M<=8)    
        {    
            cout << "Summer" << endl;     
        }    
        if (M>=9 and M<=11)    
        {    
            cout << "Autumn" << endl;    
        }    
        if (M<=2 or M==12)    
        {    
            cout << "Winter" << endl;    
        }    
    }    
        
    return 0;    
}  