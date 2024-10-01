#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Input size: ";
    cin >> size;
    int* mass = new int[size];
    srand(time(0));
    cout << "Mass: ";
    for (int i = 0; i < size; ++i)
    {
        mass[i] = rand() % 41 - 20;
        cout << mass[i] << " ";
    }
    cout << endl;
    int* positive = new int[size];
    int* negative = new int[size];
    int* zero = new int[size];
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    for (int i = 0; i < size; ++i)
    {
        if (mass[i] > 0)
        {
            positive[positiveCount++] = mass[i];
        }
        else if (mass[i] < 0)
        {
            negative[negativeCount++] = mass[i];
        }
        else
        {
            zero[zeroCount++] = mass[i];
        }
    }
    cout << "Positive: ";
    for (int i = 0; i < positiveCount; ++i)
    {
        cout << positive[i] << " ";
    }
    cout << endl;
    cout << "Negative: ";
    for (int i = 0; i < negativeCount; ++i)
    {
        cout << negative[i] << " ";
    }
    cout << endl;
    cout << "Zero: ";
    for (int i = 0; i < zeroCount; ++i)
    {
        cout << zero[i] << " ";
    }
    cout << endl;

    delete[] mass;
    delete[] positive;
    delete[] negative;
    delete[] zero;
}