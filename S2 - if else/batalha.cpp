#include <iostream>

using namespace std;

int main (){
    
    int a1;
    int d1;
    
    int a2;
    int d2;
    
    cout << "Insira o valor de ATAQUE do JOGADOR 1:  \n";
    
    cin >>a1;
    
    cout <<"Insira o valor de DEFESA do JOGADOR 1: \n";
    
    cin >> d1;
    
    cout << "Insira o valor de ATAQUE do JOGADOR 2: \n";
    
    cin >> a2;
    
    cout << "Insira o valor de DEFESA do JOGADOR 2: \n";
    
    cin >> d2;
    
    if (a1 >= 1 && a1 <= 100 && a2 >= 1 && a2 <= 100 && d1 >=1 && d1 <=100 && d2 >=1 && d2 <=100)
       
       if (a1 > d2 && a2< d1 )
            
            cout << "O jogador vencedor é o: 1 \n"; 
            
        else if ( a1 > d2 && a2 == d1)
            cout << "O jogador vencedor é o: 1 \n";
            
        else if (a1 > d2 && a2 < d1)
            cout << "A batalha terminou em empate: -1 \n";
            
        else if (a2 > d1 && a1 < d2)
            cout << "O jogador vencedor é o: 2 \n";
            
        else if (a2 > d1 && a1 == d2)
            cout << "O jogador vencedor é o: 2 \n";
            
        else if (a2 > d1 && a1 > d2)
            cout <<"O jogador vencedor é o: -1 (empate)\n";
            
        else if (a1 == d2 &&  a2 < d1)
            cout << "O jogador vencedor é o: -1 (empate)\n";
            
        else if (a1 == d2 && a2 == d1)
            cout << "O jogador vencedor é o: -1 (empate)\n";
            
        else if (a2 == d1 && a1 < d2)
            cout << "O jogador vencedor é o: -1 (empate)\n";
            
        else if (a2 == d1 && a1 == d2)
            cout << "O jogador vencedor é o: -1 (empate)\n";
            
        else if (a1 < d2 && a2 < d1)
            cout << "O jogador vencedor é o: -1 (empate)\n";
            
        else (a2 < d1 && a1 < d2)
            
            cout << "O jogador vencedor é o: -1 (empate)\n";
      
     else
    
    cout << "Valores de ataque e/ou defesa inválidos \n";
    
    return 0; 
}