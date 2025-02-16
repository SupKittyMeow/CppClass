#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

void createGrid(char board[3][3]) {
  int i = 0;
  cout << board[i][0] << board[i][1] << board[i][2] << endl;
  i++;
  cout << board[i][0] << board[i][1] << board[i][2] << endl;
  i++;
  cout << board[i][0] << board[i][1] << board[i][2] << endl;
}

int main() {
  char board[3][3] = {{'m', 'm', 'm'}, {'m', 'm', 'm'}, {'m', 'm', 'm'}};
  while (true) {
    createGrid(board);
    string playerX;
    string playerY;

    cout << "X axis:" << endl;
    cin >> playerX;
    cout << "Y axis:" << endl;
    cin >> playerY;

    try {
      stoi(playerX);
      stoi(playerY);
    } catch (...) {
      cout << "Not playable!" << endl;
      continue;
    }
    if (stoi(playerX) < 0 || stoi(playerX) > 2 || stoi(playerY) < 0 ||
        stoi(playerY) > 2) {
      cout << "Can't play there!" << endl;
      continue;
    } else if (board[stoi(playerY)][stoi(playerX)] != 'm') {
      cout << "Already played" << endl;
      continue;
    } else {
      board[stoi(playerY)][stoi(playerX)] = 'o';
    }

    // int aiX;
    // int aiY;
    // while (board[])
  }
  return 0;
}