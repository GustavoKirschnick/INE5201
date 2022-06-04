#include <iostream>

#include <cstring>

using namespace std;

int main (){
    
    char numero[16];
    cin >> numero;
    
    string tec = "22233344455566677778889999";
    
    for (int  i = 0; i < strlen(numero); i++){
        
        if (numero[i] != '-'){
            
            cout << tec[numero[i] - 'A'];
        } else {
            
            cout << '-';
        }
    }
    
 
    
    
    return 0;
}