#include <iostream>

#define NMAX 10000

using namespace std;

int c[NMAX];

int main (){
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        
        cin >> c[i];
    }
    
    if (c[0] > 8){
        
        cout <<"N"<<endl;
        return 0;
    }
    
    if (abs(c[0]-c[1]) > 8){
        
        cout <<"N" <<endl;
        return 0;
    }
    
    for (int i = 1; i < n - 1; i++){
        
        if(abs(c[i]-c[i+1]) > 8){
            
            cout << "N" << endl;
            return 0;
        }
    }
    
    cout <<"S"<<endl;
    
    return 0;
  
}