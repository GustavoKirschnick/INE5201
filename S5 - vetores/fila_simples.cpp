#include <iostream>

#define NMAX 50000

#define IDMAX 100000

using namespace std;

int f[NMAX], id[IDMAX+1];

int main (){
  
    for (int k = 1; k <= IDMAX; k++){
        
        id[k] = 0;
        
    }
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        
        cin >> f[i];
        id[f[i]] = 1;
    }
    
    int m;
    cin >> m;
    for (int j = 0; j < m; j++){
        
        int s;
        cin >> s;
        id[s] = 0;
        
    }
    
    for (int i = 0; i < n; i++){
        
        if (id[f[i]] == 1){
            
            cout << f[i] << ' ';
        }
    }
    
    cout <<'\n';
}