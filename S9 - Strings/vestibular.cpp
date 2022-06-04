#include <iostream>

#include <cstring>

using namespace std;

int main (){
    
    int N;
    cin >> N;
    
    char gab[N];
    char can[N];
    
    int c = 0;
    
    cin >> gab >> can;
    
    for (int i = 0; i < strlen(gab); i++){
        
        if (gab[i] == can [i]){
            
            c += 1;
        } else {
            
            c += 0;
        }
    }
    
    cout << c <<endl;
    return 0;
}