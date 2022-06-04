#include <iostream>

using namespace std;

int main (){
    
    int n;
    
    int q = 0;
    
    cin >> n;
    
    for (int i = 0 ; i < n; i++){
        
     int l, c;
     
     cin >> l >> c;
     
     if (l > c){
         
         q += c;
     }
     
    }
    
    cout << q << endl;
    
    return 0; 
}