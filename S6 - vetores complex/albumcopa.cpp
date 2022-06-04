#include <iostream>

using namespace std;

#define NMAX 100

int a[NMAX+1]

int main (){
    
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++){
        
        a[i] = 0;
        
    }   
    
	for (int j = 0; j < m; j++){
            
            int fig;
            cin >> fig;
            
            a[fig] = 1;
        }
    
    int c = 0;
    
    for (int i = 1; i <= n; i++){
        
        if (a[i] == 0){
            
            c++;
        }
    }
    
    cout << c <<endl;
    return 0; 
    
}