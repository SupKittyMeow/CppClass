#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ingredients;
string newIngredient;

int main() {
  while (true) {
    cout << "What would you like to add to your ice cream?" << endl
         << "Say 'done' when you are ready" << endl;

    cin >> newIngredient;

    if (newIngredient == "done") {
      break;
    }

    ingredients.push_back(newIngredient);
    newIngredient = "";
  }

  cout << "Your amazing ice cream has ";
  int i = 0;
  while (i < ingredients.size() - 2) {
    cout << ingredients[i] << ", ";
    i++;
  }
  cout << ingredients[i] << " and " << ingredients[i + 1] << endl;

  return 0;
}