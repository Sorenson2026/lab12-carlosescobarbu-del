/*
Carlos Escobar
4/7/2026
This program asks you to input numbers and it output a sum
*/
#include <iostream>
using namespace std;

// Function prototypes
void fillArray(int arr[][6], int rows);
void printArray(int arr[][6], int rows);
void printTotals(int arr[][6], int rows);

// helper function that makes space
void printSpace(int num);

//This function calls other functions, and it makes you input some numbers
int main()
{
    cout << "This program will ask you to input numbers for arrays, and then it will add the different numbers of the columns."<<endl;
    const int ROWS = 5;
    const int COLS = 6;

    int data[ROWS][COLS];

    fillArray(data, ROWS);

    cout << endl;

    printArray(data, ROWS);

    cout << "---------------------------------" << endl;

    printTotals(data, ROWS);

    return 0;
}

// This function fills the array
void fillArray(int arr[][6], int rows)
{
    for (int i = 0; i 
        < rows; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

// This function prints the array
void printArray(int arr[][6], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printSpace(arr[i][j]);
        }
        cout << endl;
    }
}

// This function prints column totals
void printTotals(int arr[][6], int rows)
{
    for (int j = 0; j < 6; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += arr[i][j];
        }
        printSpace(sum);
    }
    cout << endl;
}

// Function to print numbers in 5 spaces manually
void printSpace(int num)
{
    int digits = 0;
    int temp = num;

    if (temp == 0)
        digits = 1;
    else
    {
        while (temp != 0)
        {
            temp /= 10;
            digits++;
        }
    }

    // print spaces before number
    for (int i = digits; i < 5; i++)
        cout << " ";

    cout << num;
}