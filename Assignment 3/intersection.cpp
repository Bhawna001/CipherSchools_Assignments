#include <bits/stdc++.h>
using namespace std;
 
void printIntersection(int num1[], int num2[], int m, int n)
{
   int i = 0, j = 0;
    while (i < m && j < n) {
        if (num2[j] < num1[i])
            i++;
        else if (num1[i] < num2[j])
            j++;
        else 
        {
            cout << num1[i] << " ";
            i++;
            j++;
        }
    }
}
 
int main()
{
    int num1[] = { 4,9,5 };
    int num2[] = { 9,4,9,8,4 };
 
    int m = sizeof(num1) / sizeof(num1[0]);
    int n = sizeof(num2) / sizeof(num2[0]);
 
    printIntersection(num1, num2, m, n);
 
    return 0;
}
