#include <iostream>

using namespace std;

int main (){
    
    int n;
    int d = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        
        int t, v;
        
        cin >> t >> v;
        
        d += v*t; 
        
    }
    
    cout << d << endl;
    
    return 0;
}