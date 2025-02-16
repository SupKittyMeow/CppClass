#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

string playerMove;

int main2() {
  while (true) {
    srand(time(0));
    int random_number = rand() % 3;

    cout << "Rock paper or scizzors, or done to quit" << endl;
    cin >> playerMove;

    for (char &c : playerMove) {
      c = std::tolower(c);
    }

    if (playerMove == "rock") {
      if (random_number == 0) {
        cout << "AI played rock. Tie.";
      } else if (random_number == 1) {
        cout << "AI played paper. You lose.";
      } else if (random_number == 2) {
        cout << "AI played scizzors. You win.";
      }
    } else if (playerMove == "paper") {
      if (random_number == 0) {
        cout << "AI played rock. You win.";
      } else if (random_number == 1) {
        cout << "AI played paper. Tie.";
      } else if (random_number == 2) {
        cout << "AI played scizzors. You lose.";
      }
    } else if (playerMove == "scizzors") {
      if (random_number == 0) {
        cout << "AI played rock. You lose.";
      } else if (random_number == 1) {
        cout << "AI played paper. You win.";
      } else if (random_number == 2) {
        cout << "AI played scizzors. Tie.";
      }
    } else if (playerMove == "done") {
      return 0;
    } else {
      cout << "Unknown command";
    }
    cout << endl << endl;
  }
}