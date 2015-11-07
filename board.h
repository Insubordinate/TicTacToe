#include <iostream>
using namespace std;
#include <cstring>
#ifndef TEST_H
#define	TEST_H



class Board
{
 public:
    string x1;
    string x2;
    string x3;
    string x4;
    string x5;
    string x6;
    string x7;
    string x8;
    string x9;
     
    
    //Member Functions
    void setString(string x, string val);
    string printBoard(void);
    
};

void Board::setString(string x, string val){
    if(x=="x1"){
        x1=val;
    }
     if(x=="x2"){
        x2=val;
    }
     if(x=="x3"){
        x3=val;
    }
     if(x=="x4"){
        x4=val;
    }
     if(x=="x5"){
        x5=val;
    }
     if(x=="x6"){
        x6=val;
    }
     if(x=="x7"){
        x7=val;
    }
     if(x=="x8"){
        x8=val;
    }
     if(x=="x9"){
        x9=val;
    }
    
}

string Board::printBoard(void)
{
        return x1 + "|" + x2 + "|" + x3+"\n"
             +"_"+" "+"_"+" "+"_"+" "+"\n" 
              +x4 + "|" + x5 + "|" + x6+"\n"
              +"_"+" "+"_"+" "+"_"+" "+"\n"
              +x7 + "|" + x8 + "|" + x9+"\n";
         

}

void checkInput(string input,Board board){
    if(input=="1"){
        board.setString("x1","X");
    }
    
}

#endif	/* TEST_H */

