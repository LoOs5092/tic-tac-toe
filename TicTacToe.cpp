#include <iostream>
#include <string>
using namespace std;
void printArray(int**);
void enterMatrix(int**);
int vaildation(int**);
void win(int);
int drawCheck(int**);
int main( )
{
    int rows = 3;
    int cols = 3;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i)
    matrix[i] = new int[cols];
    cout << "Welcome to tic tok" << endl;
    printArray(matrix);
    enterMatrix(matrix);
return 0;
} 


void printArray (int** matrixArray) {
    for (int i = 0; i < 3; i++){   
        cout << "|";
        for (int j = 0; j < 3; j++){
             if (matrixArray[i][j] == 1) {
                cout << "X" << "|";
            } else if (matrixArray[i][j] == 2) {
                cout << "O" << "|";
            } else
            cout << " " << "|";
        }
        cout << endl;
    }
}

void enterMatrix(int** matrixArray) {
    int state = 1;
    int player = 1;
    int row, column;
    while(state == 1) {
        if (player == 1) {
            cout << "Player X, ";
        }
        if (player == 2) {
            cout << "Player O, ";
        }
        cout << "enter row (0-2) and column (0-2):";
        cin >> row >> column;
        if (row > 2 || column > 2) {
            cout << "Invalid move, try again!" << endl;
            continue;
        }
        if (matrixArray[row][column] == 1 || matrixArray[row][column] == 2) {
            cout << "Invalid move, try again!" << endl;
            continue;
        } else {
            if (player == 1) {
                matrixArray[row][column] = 1;
                player = 2;
            } else {
                matrixArray[row][column] = 2;
                player = 1;
            }
            printArray(matrixArray);
            state = vaildation(matrixArray);
            state = drawCheck(matrixArray);
        }
    }
}
int vaildation (int** matrixArray) {
    int pervious;
    for (int i = 0; i < 3; i++){
        int pervious = matrixArray[i][0];
        if ( (pervious != 1 || pervious != 2)) break;
        if (pervious == matrixArray[i][1] && pervious == matrixArray[i][2]){
            win(pervious);
            return 0;
        }
        
    }
        for (int i = 0; i < 3; i++){
        int pervious = matrixArray[0][i];
        if (pervious == matrixArray[1][i] && pervious == matrixArray[2][i] && (pervious == 1 || pervious == 2)){
            win(pervious);
            return 0;
        }
    }
    pervious = matrixArray[0][0];
        if (pervious == matrixArray[1][1] && pervious == matrixArray[2][2] && (pervious == 1 || pervious == 2)) {
        win(pervious);
            return 0;
        }
        pervious = matrixArray[2][0];
        if (pervious == matrixArray[1][2] && pervious == matrixArray[0][2] && (pervious == 1 || pervious == 2)){
        win(pervious);
        return 0;
        }
        return 1;
}

void win(int winner) {
    if (winner == 1) {
        cout << "X is winner";
    } else {
        cout << "O is winner";
    }
}
int drawCheck(int** matrixArray) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrixArray[i][j] == 1 || matrixArray[i][j] == 2) count++;
        }
    }
    if (count >= 9) {
        cout << "It is a draw!";
        return 0;
    }
    return 1;
}