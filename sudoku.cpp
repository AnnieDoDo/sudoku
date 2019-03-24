#include <iostream>
#include "sudoku.h"
using namespace std;

void sudoku::print(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if (j==8){
                cout<<map[i][j];
            }else{
                cout<<map[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void sudoku::changeNum(int oldNum, int newNum){
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(map[i][j]==oldNum){
                    map[i][j]=newNum;
            }else if(map[i][j]==newNum)
            {
                map[i][j]=oldNum;               
             }
        }
    }
}

void sudoku::changeRow(int oldRow, int newRow){
    oldRow=oldRow*3;
    newRow=newRow*3;
    for(int i=0;i<3;i++){
        for(int j=0;j<9;j++){
                int temp=map[oldRow+i][j];
                map[oldRow+i][j]=map[newRow+i][j];
                map[newRow+i][j]=temp;
        }
    }
}

void sudoku::changeCol(int oldCol, int newCol){
    oldCol=oldCol*3;
    newCol=newCol*3;
    for(int i=0;i<3;i++){
        for(int j=0;j<9;j++){
                int temp=map[j][oldCol+i];
                map[j][oldCol+i]=map[j][newCol+i];
                map[j][newCol+i]=temp;
        }
    }
}

void sudoku::rotate(int rotateTimes){
    rotateTimes=rotateTimes%4;
    switch(rotateTimes){
   
    
    }
}

void sudoku::flip(bool flipWay){

}