//Abid Bakhtiyar
//890459241
#include <iostream>
using namespace std;
int reverseArray (int arr[], int n)
{
  int temp, start, end;
  end = n-1;
  start = 0;
  while (start <= end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start ++;
    end--;
  }
}
int main()
{
  int myArr[10];
  int num;
  cout << "Enter how many numbers" << endl;
  cin >> num;
  cout << "Enter Array" << endl;
  for (int i = 0; i < num; i ++)
  {
    cin >> myArr[i];
  }
  cout << "**********************" << endl;
  for (int i = 0; i < num; i ++)
  {
    cout << myArr[i] << endl;
  }
  reverseArray(myArr, num);
  cout << "**********************" << endl;
  for(int i = 0; i < num; i++)
  {
    cout << myArr[i] << endl;
  }

}
