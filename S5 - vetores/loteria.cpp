#include <iostream>

using namespace std;

int main (){
    
    int n[6];
    
    for (int i = 0; i < 6; i++){
        
        cin >> n[i];
        
    }
    
    int g[6];
    
    for (int j = 0; j < 6; j++){
        
        cin >> g[j];
        
    }
  
    int a = 0;
    
    for (int k = 0; k < 6; k++) {
        
        for(int l = 0; l <6; l++){
            
            if (n[k] == g[l]) {
                
                a++;
                
            }
        }
    }
    
    if (a == 3){
        
        cout << "terno" <<endl;
    } else if (a == 4) {
        
        cout << "quadra" <<endl;
        
    } else if (a == 5){
        
        cout << "quina" <<endl;
        
    } else if (a == 6){
        
        cout << "sena" <<endl;
    } else {
        
        cout << "azar" <<endl;
    }
    
    return 0;
}


    
    