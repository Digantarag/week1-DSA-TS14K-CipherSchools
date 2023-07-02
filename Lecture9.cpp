#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

// n-queens

bool isSafe(vector<vector<bool>> &Chess, int x, int y, const int &N) {
    for (int i = x; i >= 0; i--){
        if(Chess[i][y]) {
            return false;
        }
    }
    for (int i = x, j = y; i>= 0 and j >= 0; i--, j--){
        if(Chess[i][y]){
            return false;
        }
    }
    for(int i = x, j = y; i < N and j >= 0; i++, j--){
        if(Chess[i][y]){
            return false;
        }
    }
    return true;
}

bool NQueens(vector<vector<bool>> &Chess, int y, const int &N) {
    if(y==0){
        return true;
    }
    for(int x=0; x<N; x++){
        if(isSafe(Chess, x, y, N)){
            Chess[x][y] = true;
            if(NQueens(Chess, y+1, N)){
                return true;
            }
            Chess[x][y] = false;
        }
    }
    return false;
}

vector<vector<bool>> NQueen(int N){
    vector<vector<bool>> Chess(N, vector<bool>(N, false));
    NQueens(Chess, 0, N);
    return Chess;
}

int main() {
    
    return 0;
}