#include <iostream>

using namespace std;

int main (){
    
    int n;
    cin >> n;
    int f[10000];
    int d[10000];
    for (int i = 0; i < n; i++){
        
        cin >> f[i];
        
    }
    
    for (int i = 0; i < n; i++){
        
        int desq = 10000; 
        for (int j = i; j >= 0;j--){
            
            if (f[j] == 0){
                
                desq = i - j;
                break;
            }
        }
        
        int ddir = 10000;
        for (int j = i; j < n; j++){
            
            if (f[j] == 0){
                
                ddir = j - i;
                break;
            }
        }
        
        
        int x = min(ddir, desq);
        d[i] = min(x, 9);
    }
    
    for (int i = 0; i < n; i++){
        
        cout << d[i] << ' ';
        cout << '\n';
        
    }
}