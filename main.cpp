/* 
 * File:   main.cpp
 * Author: rubyist
 *
 * Created on November 6, 2015, 11:41 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
 * 
 */
int main() {
    int x1,x2,x3,x4,x5,x6,x7,x8,x9;
    x1=1;
    x2=2;
    x3=3;
    x4=4;
    x5=5;
    x6=6;
    x7=7;
    x8=8;
    x9=9;
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
    std::cout<<x1<< "|" <<x2<< "| "<<x3<<"\n";
    std::cout<<"_"<< " " <<  "_" <<" " <<"_\n";
    std::cout<<x4<< "|" <<x5<< "| "<<x6<<"\n";
    std::cout<<"_"<< " " <<  "_" <<" " <<"_\n";
    std::cout<<x7<< "|" <<x8<< "| "<<x9<<"\n";
    
    
    
    while(true){
        cout<<"Type a number!";
        string input = "";
        getline(cin, input);   
        if(input=="1"){
          
            break;
        }
            if(input==2){
                x2="X";
                break;
                
            }
            if(input==3){
                x3="X";
                  break;
            }
            if(input==4){
                x4="X";
                  break;
            }
            if(input==1){
                x5="X";
                  break;
            }
            if(input==1){
                x6="X";
                  break;
            }
            if(input==1){
                x7="X";
                  break;
            }
            if(input==1){
                x8="X";
                  break;
            }
            if(input==1){
                x9="X";
                break;
            }
            
        }
    }
}

