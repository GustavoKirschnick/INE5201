#include <iostream>

using namespace std;

int main () {
    
    int n;
    int menor = 1000;
    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        
        int q;
        
        cin >> q;
        
        if (q < menor){
            
            menor = q;
        }
    }
    
    cout << menor << endl;
    
    return 0;
}