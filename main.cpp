#include <cstring>
#include <iostream>
using namespace std;
 
 
int main()
{
    char texto[40];
 
    cout << "Introduce una palabra: ";
    cin >>  texto;
    cout << "la palabra tiene " << strlen(texto)
        << " caracteres..." << endl;    
 
    return 0;
}
