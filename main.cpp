

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include "board.h"

using namespace std;

/*
 * 
 */
int main() {
    Board TicTacToe;
    
    while(true){
        cout<<"Welcome! Are you ready? (y/n)";
        string input = "";
        getline(cin, input);
        if(input=="y"){
            break;
        }else if(input=="n"){
            cout<<"Come back when you're ready!\n";
        }else{
            cout<<"Please type y/n\n";
        }
    }
    
    cout<<TicTacToe.printBoard();
}   