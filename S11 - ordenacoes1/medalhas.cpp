#include <iostream>

#include <algorithm>

using namespace std;

int main (){
    
    int n;
    cin >> n;
    int v[n];
    
    for (int i = 0; i < n; i++){
        
        cin >> v[i];
        
        sort (v, v+n);
        
    }
    
        
        cout << "1 " << v[0] <<endl;
        cout << "2 " << v[1] <<endl;
        cout << "3 " << v[2] <<endl;
        
    
    return 0;
}