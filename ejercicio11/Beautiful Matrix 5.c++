#include <iostream>

using namespace std;

int main(){
    int matrix[5][5];
    int x, y;
    int moves = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matrix[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }

    while(x != 2 || y != 2){
        if(x > 2){
            x--;
            moves++;
        }else if(x < 2){
            x++;
            moves++;
        }

        if(y > 2){
            y--;
            moves++;
        }else if(y < 2){
            y++;
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}