//
//  main.cpp
//  Bingo Generator
//
//  Created by Andrew Nomura on 9/19/20.
//  Copyright © 2020 Andrew Nomura. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class bingoTypes {
public:
    int called[75] = {};
    
    void bingoCalled(int *nums){
        
        cout << "B ";
        for (int i = 0; i < 15; i++){
            cout << nums[i] << " ";
        }
        cout << "\nI ";
        for (int i = 15; i < 30; i++){
            cout << nums[i] << " ";
        }
        cout << "\nN ";
        for (int i = 30; i < 45; i++){
            cout << nums[i] << " ";
        }
        cout << "\nG ";
        for (int i = 45; i < 60; i++){
            cout << nums[i] << " ";
        }
        cout << "\nO ";
        for (int i = 60; i < 75; i++){
            cout << nums[i] << " ";
        }
        
        
       fill_n(nums, 75, 0);
    }
    
    void bingoRegular(){
        int x = 0;
        srand(static_cast<unsigned int>(time(nullptr)));
        
        while(cin.get() != 'b'){
            x = rand() % 75 + 1;            //x ranges from 1 - 75
            
            if (x == called[x-1]){            //if x is already called then go next
                ;
            }
            else {                          //otherwise, assign the x to the
                if (1 <= x && x <= 15){     //respective index in called array
                    cout << "B";
                }
                if (16 <= x && x <= 30){
                    cout << "I";
                }
                if (31 <= x && x <= 45){
                    cout << "N";
                }
                if (46 <= x && x <= 60){
                    cout << "G";
                }
                if (61 <= x && x <= 75){
                    cout << "O";
                }
                cout << x;
                called[x-1] = x;
            }
        }
        bingoCalled(called);                //user enters '\n' if a bingo has been called, then call bingoCalled()
        cout << "\nWhat kind of game? ";
        
    }
    void bingoX(){
        int x = 0,  N[] = {31,32,33,34,35,36,37,38,39,40,41,42,43,44,45}; //No numbers in the N column should be called
        srand(static_cast<unsigned int>(time(nullptr)));
        
        while(cin.get() != 'b'){
            x = rand() % 75 + 1;            //x ranges from 1 - 75
            
            if (x == called[x-1] || find(begin(N), end(N), x-1) != end(N)){            //if x is already called then go next
                ;
            }
            else {                          //otherwise, assign the x to the
                if (1 <= x && x <= 15){     //respective index in called array
                    cout << "B";
                }
                if (16 <= x && x <= 30){
                    cout << "I";
                }
                if (46 <= x && x <= 60){
                    cout << "G";
                }
                if (61 <= x && x <= 75){
                    cout << "O";
                }
                cout << x;
                called[x-1] = x;
            }
        }
        bingoCalled(called);                //user enters '\n' if a bingo has been called, then call bingoCalled()
        cout << "\nWhat kind of game? ";
    }
    void bingoCenter(){
        int x = 0;
        int BO[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                    61,62,63,64,65,66,67,68,69,70,71,72,73,74,75}; //No numbers in the B, O column should be called
        srand(static_cast<unsigned int>(time(nullptr)));
               
       while(cin.get() != 'b'){
           x = rand() % 75 + 1;            //x ranges from 1 - 75
           
           if (x == called[x-1] || find(begin(BO), end(BO), x-1) != end(BO)){            //if x is already called then go next
               ;
           }
           else {                          //otherwise, assign the x to the respective index in called array
               if (16 <= x && x <= 30){
                   cout << "I";
               }
               if (31 <= x && x <= 45){
                   cout << "N";
               }
               if (46 <= x && x <= 60){
                   cout << "G";
               }
               cout << x;
               called[x-1] = x;
           }
       }
       bingoCalled(called);                //user enters '\n' if a bingo has been called, then call bingoCalled()
       cout << "\nWhat kind of game? ";
        
    }
    void bingoN(){
        int x = 0;
        int BIGO[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                      16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,
                      46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,
                      61,62,63,64,65,66,67,68,69,70,71,72,73,74,75}; //No numbers in the B,I,G,O column should be called;
        srand(static_cast<unsigned int>(time(nullptr)));
        
        while(cin.get() != 'b'){
            x = rand() % 75 + 1;            //x ranges from 1 - 75
            
            if (x == called[x-1] || find(begin(BIGO), end(BIGO), x-1) != end(BIGO)){            //if x is already called then go next
                ;
            }
            else {                          //otherwise, assign the x to the //respective index in called array
                cout << "N" << x;
                called[x-1] = x;
            }
        }
        bingoCalled(called);                //user enters '\n' if a bingo has been called, then call bingoCalled()
        cout << "\nWhat kind of game? ";
    }
    void bingoK(){
        int x = 0,  BN[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                            31,32,33,34,35,36,37,38,39,40,41,42,43,44,45}; //No numbers in the B or N column should be called
        srand(static_cast<unsigned int>(time(nullptr)));
        
        while(cin.get() != 'b'){
            x = rand() % 75 + 1;            //x ranges from 1 - 75
            
            if (x == called[x-1] || find(begin(BN), end(BN), x-1) != end(BN)){            //if x is already called then go next
                ;
            }
            else {                          //otherwise, assign the x to the respective index in called array
                if (16 <= x && x <= 30){
                    cout << "I";
                }
                if (46 <= x && x <= 60){
                    cout << "G";
                }
                if (61 <= x && x <= 75){
                    cout << "O";
                }
                cout << x;
                called[x-1] = x;
            }
        }
        bingoCalled(called);                //user enters '\n' if a bingo has been called, then call bingoCalled()
        cout << "\nWhat kind of game? ";
    }
    
};


int main(int argc, const char * argv[]) {
    string type = "";
    bingoTypes bt;

    cout << "Bingo Generator\n\n";
    
    cout << "Exit\n\n";
    
    cout << "What kind of game? ";
    while(type != "exit"){
        cin >> type;

        if(type == "diagonal" || type == "x"){
            bt.bingoX();        //No N column
        }
        if(type == "regular" || type == "one of each" || type == "reverse" || type == "blackout" || type == "perimeter"
           || type == "vertical" || type == "3x3" || type == "2x2" || type == "y"){
            bt.bingoRegular(); //Most gamemodes use the whole game board.
        }
        if (type == "center"){
            bt.bingoCenter();   //No B or O column
        }
        if (type == "n"){
            bt.bingoN();
        }
        if (type == "k"){
            bt.bingoK();
        }
    }
    

    return 0;
}
