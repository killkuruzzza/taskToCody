#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Задача первая, решение из сортировки кучей
  vector<int> mergerVectros(vector<int>& vector1, vector<int>& vector2) {
      vector<int> result;
      int i = vector1.size() - 1, j = vector2.size() - 1;
      while (i > 0 && j > 0) {
          if (vector1[i] > vector2[j]) {
              result.push_back(vector1[i]);
              i--;
          }
          else {
              result.push_back(vector2[j]);
              j--;
          }
      }
      while (i > 0) {
          result.push_back(vector1[i]);
          i--;
      }
      while( j > 0) {
          result.push_back(vector2[j]);
          j--;
      }
      return result;
  }
  //Задача 2, условие написано не лучшим образом, нет примеров, ограничений по входным данным.Надеюсь задачу понял правильно)
  int bengalFire(int c1, int b1) {
      if (b1 == 0)
          return c1 * 2;
      return (c1 + c1 / b1) * 2;

  }
  int main() {
      vector<int> a = { 1, 2, 3, 4, 5, 6, 7 }, b = { 1, 2, 3, 4, 5, 6, 7 };
      for (int i : mergerVectros(a, b)) {
          cout << i << " ";
      }
      cout << endl << " " << bengalFire(0, 0);
  }
