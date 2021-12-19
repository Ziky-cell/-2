#include <iostream>//дан массив A из N элементов, состоящий из нулей и еди - ниц.заменить единицы нулями и наоборот.
#include <string>
 
int main() {
    using namespace std;
    string text;
   cout << "введите числа единицы и нули: " ;
    getline(cin, text);
   for (size_t i = 0; i < text.length(); i++) {
        if (text[i] == '1') {
            text[i] = '0';
        } else if (text[i] == '0') {
            text[i] = '1';
          }
    }
  cout << "значение:  ";
    cout << text << endl;
  }
