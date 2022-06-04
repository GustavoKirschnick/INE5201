#include <iostream>

#include <algorithm>

#include <vector>

#include <string>

using namespace std;

int main (){
    
    vector<string> nomes;
    
    int n, k;
    cin >> n >> k;
    
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
       nomes.push_back(s);
    }
    
    sort(nomes.begin(), nomes.end());
    
    cout << nomes[k-1] << '\n';

    return 0;
}

