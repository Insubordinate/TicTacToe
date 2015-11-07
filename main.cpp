

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
    TicTacToe.setString("x1","1");
    TicTacToe.setString("x2","2");
    TicTacToe.setString("x3","3");
    TicTacToe.setString("x4","4");
    TicTacToe.setString("x5","5");
    TicTacToe.setString("x6","6");
    TicTacToe.setString("x7","7");
    TicTacToe.setString("x8","8");
    TicTacToe.setString("x9","9");
    
    
    
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
    
    while(true){
        cout<<"Input a number! ";
        string input ="";
        getline(cin, input);
        
        break;
        
    }
    cout<<TicTacToe.printBoard();
}   