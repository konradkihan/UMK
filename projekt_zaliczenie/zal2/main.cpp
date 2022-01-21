/* ZADANIE 4 
Napisać program tworzący skorowidz, czyli listę wszystkich słów występujących
w pliku tekstowym i dla każdego słowa listę numerów wierszy, w których to słowo wystąpiło.

Konrad Kihan 2022
*/

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;


bool is_duplicate(string word, string tab[], int tab_ctr[], string tab_lines[], int tab_size, int line_number){
    bool is_dupe = false;
    for(int i = 0; i < tab_size; i++){
        if(tab[i] == word){
            tab_lines[i] += to_string(line_number);
            tab_ctr[i] += 1;
            is_dupe = true;
            break;
        }
    }
    return is_dupe;    
}



int read_file(string name){
    fstream file;
    file.open(name, ios::in);
    if(!file.good()) return -1;
    
    
    string str, line;
    const int TAB_SIZE = 1000;
    string words[TAB_SIZE];
    string words_lines[TAB_SIZE];
    int words_ctr[TAB_SIZE];
    
        
    int id = 0;
    int line_number = 1;
    while(getline(file, line)){
        stringstream ss(line);
        while(getline(ss, str, ' ')){
            if(!is_duplicate(str, words, words_ctr, words_lines, id, line_number)){
                words_lines[id] += to_string(line_number);
                words_ctr[id] = 1;
                words[id] = str;
                id++;
            }

            
        }
        line_number++;
    }
    
    for(int i = 0; i < TAB_SIZE; i++){
        if(words[i]=="") break; 
        cout << words[i] <<" "<< words_ctr[i] <<" | "<< words_lines[i] <<endl;
        
    }
    
return 1;

}



int main(){
    read_file("test.txt");
}
