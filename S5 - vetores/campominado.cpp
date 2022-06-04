#include <iostream>

using namespace std;

int main (){
    
    int n;
    cin >> n;
    int v[n];


    for (int i = 0; i < n; i++ ){
        
        cin >> v[i];
    }
    
    if (n == 1){
        
        cout << v[0] << endl;
        return 0;
        
    }
    
    if (n > 1 && n <= 50){
    cout << v[0] + v[1] <<endl;
    
    for (int i = 1; i < n-1; i++){
        
        cout << v[i-1] + v[i] + v[i+1] << endl;
    }
    
    cout << v[n-2] + v[n-1] << endl;
    }
    if (n > 51){
        
        return 0;
    }
    return 0;
}
    
    