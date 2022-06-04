#include <iostream>

using namespace std;

int calc(int c1, int c2){
    
    int p = c1 + c2;
    if (abs(c1-c2) == 1){
        
        p *= 3;
    }
    if (c1 == c2){
        
        p *= 2;
    }
    
    return p;
}

int main (){
    
    int l1, l2, c1, c2;
    cin >> l1 >> l2 >> c1 >> c2;
    
    int pl = calc(l1,l2);
    int pc = calc(c1,c2);
    
    if (pl > pc){
        
        cout << "Lia" <<endl;
    }
    if (pl < pc){
        
        cout << "Carolina" <<endl;
    } 
    if (pl == pc){
        
        cout <<"Empate" <<endl;
    }
    
    return 0;
}
