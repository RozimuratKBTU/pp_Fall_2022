#include <iostream>
using namespace std;

string  vowel(string s){
    string new_string = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' or s[i] == 'A' or s[i] == 'e' or s[i] == 'E' or s[i] == 'o'  or s[i] == 'O' or s[i] == 'i' or s[i] == 'I' or s[i] == 'u' or s[i] == 'U' or s[i] == 'y' or s[i] == 'Y'){
            continue;
        }
        else{
            cout << s[i];
        }
    }
    return new_string;
}

int main(){
    string s;
    cin >> s;
    getline(cin, s);
    cout << vowel(s);
}