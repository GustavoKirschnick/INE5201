#include <iostream>

#define NMAX 100

using namespace std;

int e[NMAX][NMAX];

int main (){
    
       int n;
       cin >> n;
       
       int m;
       cin >> m;
       
       for (int i = 0; i < n; i++){
           
           int x, y, z;
           cin >> x >> y >> z;
           
           x--; y--;
           
           e[x][y] = z;
           e[y][x] = z;
           
           
       }
       
       int smax =-1;
       int imax =-1; int jmax =-1; int kmax =-1;
       
       for (int i = 0; i < n; i++){
           
           for (int j = i+1; j < n; j++){
               
               for (int k = j+1; k < n; k++){
                   
                   int s = e[i][j] + e[j][k] + e[k][i];
                   
                   if (s > smax){
                       
                       smax = s;
                       imax = i; jmax = j; kmax = k;
                   }
               }
           }
       }
       
       cout << imax+1 << ' ' << jmax+1 << ' ' <<kmax+1 << endl;
       
}