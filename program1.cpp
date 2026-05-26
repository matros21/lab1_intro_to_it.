#include <iostream>
using namespace std;

int main() {
   const int M = 4;
   const int N = 5;

   int D[M][N] = {
      {10, 20, 30, 40, 50},
      {15, 25, 35, 45, 55},
      {5, 15, 25, 35, 45},
      {20, 30, 40, 50, 60}
   };

   int k;
   cin >> k;

   if (k < 1 || k > N) {
      cout << "Ошибка! k должно быть от 1 до " << N << endl;
      return 1;
   }

   k = k - 1;

   cout << "Исходная матрица:" << endl;
   for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++) {
         cout << D[i][j] << "\t";
      }
   cout << endl;
}

   for (int i = 0; i < M - 1; i++) {
      for (int j = 0; j < M - i - 1; j++) {
         if (D[j][k] < D[j + 1][k]) {
            for (int col = 0; col < N; col++) {
               int temp = D[j][col];
               D[j][col] = D[j + 1][col];
               D[j + 1][col] = temp;
            }
         }
      }
   }

   cout << "\nМатрица после сортировки строк по убыванию " << (k + 1) << "-го столбца:" << endl;
   for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++) {
         cout << D[i][j] << "\t";
      }
   cout << endl;
   }

   cout << "\nЗначения " << (k + 1) << "-го столбца после сортировки:" << endl;
   for (int i = 0; i < M; i++) {
      cout << D[i][k] << " ";
   }
   cout << endl;
   return 0;
}