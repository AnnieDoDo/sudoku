#include <iostream>
#include "sudoku.h"
using namespace std;

int main(){
    sudoku tra1;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>tra1.map[i][j];
        }
    }
    
    tra1.changeCol(0,2);
    tra1.print();

    return 0;
}