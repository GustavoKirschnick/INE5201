#include <iostream>

using namespace std;

int main (){
    
    int Cv, Ce, Cs;
    
    int Fv, Fe, Fs;
    
    cin >> Cv >> Ce >> Cs;
    
    cin >> Fv >> Fe >> Fs;
    
    int vitorioso;
    
    int pc;
    int pf;
    
    pc = 3*Cv + 1*Ce;
    pf = 3*Fv + 1*Fe;
    
    if (pc > pf){
        
        cout << "C \n";
    } else if (pf > pc){
        
        cout << "F \n";
    } else if (pc == pf && Cs != Fs){
        
        if (Cs > Fs){
            
            cout << "C \n";
        } else {
            
            cout << "F \n";
        }
    } else {
        
        cout << "= \n";
    }
    
return 0;
}