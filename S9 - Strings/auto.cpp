#include <iostream>

#include <cstring>

using namespace std;

int main (){
    
    char seq[100];
    cin >> seq;
    
    int c = 0;
    
    for (int i = 0; i < strlen(seq); i++){
        
        if (seq[i] == 'A'){
            
            c += 1;
        } else if (seq[i] == 'C'){
            
            c += 2;
        } else if (seq[i] == 'P'){
            
            c += 2;
        } else {
            
            c += 0;
        }
    }
    
    cout << c <<endl;
    return 0;
}