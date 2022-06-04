#include <iostream>

#define NMAX 100

using namespace std;

int m[NMAX][NMAX];

int main (){
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            
            cin >> m[i][j];
                
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            
            int x;
            cin >> x;
            
            m[i][j] += x;
            
            
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            
            cout << m[i][j] << ' ';
            cout << '\n';
            
            
            
        }
    }
    
    
    return 0;
    
}