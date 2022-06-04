#include <iostream>

using namespace std;

int main (){
    
    int N, P, Q;
    char c;
    
    cin >> N >> P >> c >> Q;
    
    if (c == '*'){
        if (P*Q > N){
            
            cout <<"Overflow" <<endl;
        } else {
            
            cout << "Ok" <<endl;
        }
        
    }
    
    if (c == '+'){
        if(P+Q > N){
            
            cout <<"Overflow" <<endl;
        } else {
            
            cout << "Ok" <<endl;
        }
        
    }
    
    return 0;
    
}