#include <iostream> 
using namespace std;

int main() {

   int n;
   cin >> n;

   int a[100];
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }

   int b[100];
   int k = 0;

   for (int i = 0; i < n; i++) {
      if (abs(a[i]) % 10 == 1) {
         b[k] = a[i];
         k++;
      }
   }

   for (int i = 0; i < n; i++) {
      if (abs(a[i]) % 10 != 1) {
         b[k] = a[i];
         k++;
      }
   }

   for (int i = 0; i < n; i++) {
      cout << b[i] << " ";
   }
   cout << endl;

   double sum = 0;
   int count = 0;

   for (int i = 0; i < n; i++) {
      if (abs(a[i]) % 10 != 1) {
         sum += a[i];
         count++;
      }
   }

   if (count > 0) {
      double avg = sum / count;
      cout << "Среднее арифметическое остальных чисел = " << avg << endl;
   } else {
      cout << "Все числа оканчиваются на 1, среднее арифметическое не вычисляется.\n";
   }

   return 0;
}