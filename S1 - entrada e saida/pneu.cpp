#include <iostream>

using namespace std;

int main (){
    
    int n;
    int m;
    
    cout <<"Insira a pressão desejada a ser inserida no pneu: \n";
    
    cin >> n;
   
    cout << "Insira a pressão atual do pneu: \n";
  
    cin >> m;
    
    if (n >=1 && n <=40 && m >= 1 && m <= 40)
    
    cout <<"A pressão a ser inserida será de: " << n-m << "\n";
    
    else
    
    cout <<"Valores de pressão digitados inválidos. Por favor, insira valores de pressão entre 1 e 40 \n";
    
    return 0; 
}