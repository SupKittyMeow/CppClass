#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ingredients;
string newIngredient;

int main0() {
  while (true) {
    cout << "What would you like to add to your ice cream?" << endl
         << "Say 'done' when you are ready" << endl;

    cin >> newIngredient;

    if (newIngredient == "done") {
      break;
    }
    ingredients.push_back(newIngredient);
  }
  return 0;
}