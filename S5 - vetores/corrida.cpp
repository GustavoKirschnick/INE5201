#include <iostream>

using namespace std;

int main (){
    
    int n, m;
    cin >> n >> m;
    
    int s[n];
    
    for (int i = 0; i < n; i++){
        
        s[i] = 0;
        for (int j = 0; j < m; j++){
            
            int t;
            cin >> t;
            s[i] = s[i] + t;
            
            
        }
    }
    
    int imin = 0;
    int smin = s[0];
    
    for (int i = 1; i < n; i++){
        
        if (s[i] < smin){
            
            smin = s[i];
            imin = i;
        }
    }
    
    
    cout << imin + 1 <<endl;
    return 0;
}