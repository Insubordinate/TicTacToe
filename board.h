#include <iostream>;
using namespace std;
#include <cstring>;
#ifndef TEST_H
#define	TEST_H



class Board
{
 public:
    string x1="1";
    string x2="2";
    string x3="3";
    string x4="4";
    string x5="5";
    string x6="6";
    string x7="7";
    string x8="8";
    string x9="9";
     
    
    //Member Functions
    
    string printBoard(void);
    
};

    string Board::printBoard(void)
{
        return x1 + "|" + x2 + "|" + x3+"\n"
              +"_"+" "+"_"+" "+"_"+" "+"\n"
              +x4 + "|" + x5 + "|" + x6+"\n"
              +"_"+" "+"_"+" "+"_"+" "+"\n"
              +x7 + "|" + x8 + "|" + x9+"\n";
         

}

#endif	/* TEST_H */

