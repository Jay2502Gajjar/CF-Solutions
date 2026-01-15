#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    unordered_map<char,char> mp;
    mp['A'] = 'a';
    mp['B'] = 'b';
    mp['C'] = 'c';
    mp['D'] = 'd';
    mp['E'] = 'e';
    mp['F'] = 'f';
    mp['G'] = 'g';
    mp['H'] = 'h';
    mp['I'] = 'i';
    mp['J'] = 'j';
    mp['K'] = 'k';
    mp['L'] = 'l';
    mp['M'] = 'm';
    mp['N'] = 'n';
    mp['O'] = 'o';
    mp['P'] = 'p';
    mp['Q'] = 'q';
    mp['R'] = 'r';
    mp['S'] = 's';
    mp['T'] = 't';
    mp['U'] = 'u';
    mp['V'] = 'v';
    mp['W'] = 'w';
    mp['X'] = 'x';
    mp['Y'] = 'y';
    mp['Z'] = 'z';
    mp['a'] = 'a';
    mp['b'] = 'b';
    mp['c'] = 'c';
    mp['d'] = 'd';
    mp['e'] = 'e';
    mp['f'] = 'f';
    mp['g'] = 'g';
    mp['h'] = 'h';
    mp['i'] = 'i';
    mp['j'] = 'j';
    mp['k'] = 'k';
    mp['l'] = 'l';
    mp['m'] = 'm';
    mp['n'] = 'n';
    mp['o'] = 'o';
    mp['p'] = 'p';
    mp['q'] = 'q';
    mp['r'] = 'r';
    mp['s'] = 's';
    mp['t'] = 't';
    mp['u'] = 'u';
    mp['v'] = 'v';
    mp['w'] = 'w';
    mp['x'] = 'x';
    mp['y'] = 'y';
    mp['z'] = 'z';

    string ans = "";

    
    for(int i =0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'A'){
            continue;
        }
        else if(s[i] == 'e' || s[i] == 'E'){
            continue;
        }
        else if(s[i] == 'i' || s[i] == 'I'){
            continue;
        }
        else if(s[i] == 'o' || s[i] == 'O'){
            continue;
        }
        else if(s[i] == 'U' || s[i] == 'u'){
            continue;
        }
        else if(s[i] == 'Y' || s[i] == 'y'){
            continue;
        }
        else{
            ans = ans+ "."+mp[s[i]];
        }
    }

    cout<<ans;
    return 0;
}