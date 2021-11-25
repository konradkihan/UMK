#include<iostream>

using namespace std;

void zad61(string s){
    for(int i=0; i < s.size(); i++)
        cout << "[" << s[i] << "]";
}


string zad62(string file_name){
    string new_name;
    int dot_index;
    for(int i = file_name.size(); i > 0; i--){
        if(file_name[i] == '.'){
            dot_index = i;
            break;
        }
    }
    for(int i = 0; i < dot_index; i++){
        new_name += file_name[i];
    }
    return new_name;
}



int zad63(string s, char x){
    int ctr = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == x)
            ctr++;
    return ctr;
}

int main(){
    cout<<zad63("alicja ma kota.ccc.xdd.aaa", 'a');

}
