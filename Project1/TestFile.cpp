#include <iostream>
#include "Header.h"

using namespace std;

void Alarm(int level, int exit ) // Alarm
{
    cout << "Alarm level: " << level << ". Move to exit num " << exit << endl;
}

int MenuIncrement(int a) // Value change on button press / Dumb menu
{
    while (5)
    {
        if (!HIWORD(GetKeyState(VK_ESCAPE)) && GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
        if (!HIWORD(GetKeyState(VK_UP)) && GetAsyncKeyState(VK_UP))
        {
            a++; cout << " " << a;
        }
        if (!HIWORD(GetKeyState(VK_DOWN)) && GetAsyncKeyState(VK_DOWN))
        {
            a--; cout << " " << a;
        }
    }
    return a;
}

void DecToBin(int number) // Changes integer decimal to binary (recurence)
{
    int change = number % 2;
    if (number > 1)
    {
        DecToBin(number / 2);
    }
    cout << change;
    return;
}

int Fibonacci(int first, int second, static int counter ) // Fibonacci / sum of 2 numbers
{
    if ((first == 0 and second == 0) or counter <= 0) { first = 0, second = 1, counter = 30; }
    if (counter == 1) { cout << first << " "; return first; }
    else if (counter == 2) { cout << first << " " << second << " "; return second; }
    else if (counter >= 2)
    {
        int sum = first + second;
        cout << first << " ";
        first = second;
        second = sum;
        Fibonacci(first, second, --counter);
    }
}