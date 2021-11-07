#include <iostream>
#include <cstdlib>
#include <exception>
#include "../include/lib.h"
#include<math.h>

using namespace std;

int **fillMatrix(int **matrix, int rows, int columns)
{
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            cout << "podaj wyrazy macierzy" << endl;
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

double **fillMatrix(double **matrix, int rows, int columns)
{
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            cout << "podaj wyrazy macierzy: " << endl;
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

int **dynamicAllocation1(int rows, int columns)
{
    int **matrix;
    matrix = new int *[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[columns];
    }
    return matrix;
}

double **dynamicAllocation2(int rows, int columns)
{
    double **matrix;
    matrix = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[columns];
    }
    return matrix;
}


int **addMatrix (int **matrix1, int **matrix2, int rows, int columns)
{
    int **matrix = dynamicAllocation1(rows, columns);
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return matrix;
}
double **addMatrix (double **matrix1, double **matrix2, int rows, int columns)
{
    double **matrix = dynamicAllocation2(rows, columns);
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return matrix;
}

int **subtractMatrix (int **matrix1, int **matrix2, int rows, int columns)
{
    int **matrix = dynamicAllocation1(rows, columns);
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            matrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    return matrix;
}
double **subtractMatrix (double **matrix1, double **matrix2, int rows, int columns)
{
    double **matrix = dynamicAllocation2(rows, columns);
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            matrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    return matrix;
}

int **multiplyMatrix(int **matrix1, int** matrix2, int rows, int columns1, int columns2)
{
    int **matrix = new int *[rows];
    for(int i=0; i<rows; ++i)
        matrix[i] = new int[columns2];

        for(int j=0; j<rows; ++j)
        {
        for (int k=0; k<columns2; k++)
        {
            matrix[j][k] =0;
            for (int i=0; i<columns1; i++)
            {
                matrix[j][k] += matrix1[j][i] * matrix2[i][k];
            }
        }
    }
    return matrix;
}

double **multiplyMatrix(double **matrix1, double** matrix2, int rows, int columns1, int columns2)
{
    double **matrix = new double *[rows];
    for(int i=0; i<rows; ++i)
        matrix[i] = new double[columns2];

    for(int j=0; j<rows; ++j)
    {
        for (int k=0; k<columns2; k++)
        {
            matrix[j][k] =0;
            for (int i=0; i<columns1; i++)
            {
                matrix[j][k] += matrix1[j][i] * matrix2[i][k];
            }
        }
    }
    return matrix;
}

int **multiplyByScalar(int **matrix, int rows, int columns, int skalar)
{
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            matrix[i][j] *= skalar;
        }
    }
    return matrix;
}

double **multiplyByScalar(double **matrix, int rows, int columns, double skalar)
{
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            matrix[i][j] *= skalar;
        }
    }
    return matrix;
}

int **transpozeMatrix(int **matrix, int rows, int columns)
{
   int **transponMatrix = dynamicAllocation1(rows, columns);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j)
            transponMatrix[j][i] = matrix[i][j];
    }
    return transponMatrix;
}
double **transpozeMatrix(double **matrix, int rows, int columns)
{
    double **transponMatrix = dynamicAllocation2(rows, columns);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j)
            transponMatrix[j][i] = matrix[i][j];
    }
    return transponMatrix;
}

int **powerMatrix(int **matrix, int rows, int columns, unsigned potega)
{
    int **wynik = dynamicAllocation1(rows, columns);
    wynik=matrix;

    for(int i=1; i<potega; i++) {
        wynik = multiplyMatrix(wynik, matrix, rows, columns, columns);
    }
    return wynik;
}

double **powerMatrix(double **matrix, int rows, int columns, unsigned potega)
{
    double **wynik = dynamicAllocation2(rows, columns);
    wynik=matrix;

    for(int i=1; i<potega; i++) {
        wynik = multiplyMatrix(wynik, matrix, rows, columns, columns);
    }
    return wynik;
}

/*
int determinantMatrix(int **matrix, int rows, int columns)
{
    int det = 0;
    int n = rows;

    int **submatrix = new int *[n]

    if (n == 1) {
        return matrix[0][0];
    }

    if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    }

        for (int x = 0; x < n; x++)
            submatrix[x] = new int [n];


            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinantMatrix(submatrix, n - 1, n - 1));
        }
    }
    return det;
}

*/


int determinantMatrix( int **matrix, int rows, int columns) {
    int det = 0;
    int **submatrix = dynamicAllocation1(rows, columns);
    if (rows == 2)
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        for (int x = 0; x < rows; x++) {
            int subi = 0;
            for (int i = 1; i < rows; i++) {
                int subj = 0;
                for (int j = 0; j < rows; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinantMatrix( submatrix, rows - 1, columns));
        }
    }
    return det;
}

double determinantMatrix(double **matrix, int rows, int columns) {
    double det = 0;
    double **submatrix = dynamicAllocation2(rows, columns);
    if (rows == 2)
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        for (int x = 0; x < rows; x++) {
            int subi = 0;
            for (int i = 1; i < rows; i++) {
                int subj = 0;
                for (int j = 0; j < rows; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinantMatrix( submatrix, rows - 1, columns));
        }
    }
    return det;
}

bool matrixIsDiagonal(int **matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i != j && matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

bool matrixIsDiagonal(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i != j && matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

int **swap(int **matrix, int &rows1, int &columns1, int &rows2, int &columns2) {
    int temporary = matrix[rows1][columns1];
    matrix[rows1][columns1] = matrix[rows2][columns2];
    matrix[rows2][columns2] = temporary;
    return matrix;
}


double **swap(double **matrix, int &rows1, int &columns1, int &rows2, int &columns2) {
    double temporary = matrix[rows1][columns1];
    matrix[rows1][columns1] = matrix[rows2][columns2];
    matrix[rows2][columns2] = temporary;
    return matrix;
}

int *sortRow(int *matrix, int columns)
{
    int* wynik = matrix;
    for (int i = 0; i < columns-1; i++) {
        for (int j = 0; j < columns - i - 1; j++)
            if (wynik[j] > wynik[j + 1])
                swap(wynik[j], wynik[j + 1]);
    }
    return wynik;
}

double *sortRow(double *matrix, int columns)
{
    double* wynik = matrix;
    for (int i = 0; i < columns-1; i++) {
        for (int j = 0; j < columns - i - 1; j++)
            if (wynik[j] > wynik[j + 1])
                swap(wynik[j], wynik[j + 1]);
    }
    return wynik;
}


int **sortRowsInMatrix(int **matrix, int rows, int columns) {
    int ** wynik = matrix;
    for (int i = 0; i < rows; i++)
        wynik[i]=sortRow(matrix[i],columns);
    return wynik;
}

double **sortRowsInMatrix(double **matrix, int rows, int columns) {
    double ** wynik = matrix;
    for (int i = 0; i < rows; i++)
        wynik[i]=sortRow(matrix[i],columns);
    return wynik;
}

void printMatrix(int **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printMatrix(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void help()
{
    cout << "Ten program to kalkulator macierzy. " << endl;
    cout << "Uzytkownik wczytuje wymiary macierzy i jej elementy z klawiatury. " << endl;
    cout << "Dostepne operacje: " << endl;
    cout << " 'addMatrix' - dodawanie do siebie dwoch macierzy. " << endl;
    cout << " 'subtractMatrix' - odejmowanie jednej macierzy od drugiej. " << endl;
    cout << " 'multiplyMatrix' - mnozenie dwoch macierzy przez siebie. " << endl;
    cout << " 'multiplyByScalar' - mnozenie macierzy przez liczbe. " << endl;
    cout << " 'transpozeMatrix' - transpozycja macierzy. " << endl;
    cout << " 'powerMatrix' - podnoszenie macierzy do potegi. " << endl;
    cout << " 'determinantMatrix' - wyznacznik macierzy. " << endl;
    cout << " 'matrixIsDiagonal' - sprawdzenie czy macierz jest diagonalna. " << endl;
    cout << " 'swap' - zamiana dwoch wartosci miejscami. " << endl;
    cout << " 'sortRowsInMatrix' - sortowanie wszystkich wierszy w macierzy. " << endl;
    cout << " 'help' - pomoc. " << endl;
}



