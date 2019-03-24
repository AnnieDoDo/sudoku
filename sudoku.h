#include <iostream>
using namespace std;

class sudoku{
    public:
        void print();
        void changeNum(int oldNum, int newNum);
        void changeRow(int oldRow, int newRow);
        void changeCol(int oldCol, int newCol);
        void rotate(int rotateTimes);
        void flip(bool flipWay);

        int map[9][9];
};