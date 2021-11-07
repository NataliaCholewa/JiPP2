#include <iostream>
#include "../matrixLib/include/lib.h"
#include <cstring>

using namespace std;

int main(int argc, char * argv[])
{
    string wybor;
    wybor = argv[1];

    if (wybor == "help")
    {
        help();
        exit(0);
    }

    int rows;
    int columns;
    cout << "ilosc wierszy? " << endl;
    cin >> rows;
    cout << "ilosc koumn? " << endl;
    cin >> columns;

    cout << "zmienne typu int (wpisz 0) czy double (wpisz 1)? " << endl;
    int typ;
    cin >> typ;

 if(cin.fail())
 {
        help();
        return 0;
 }



    if (wybor == "addMatrix")
    {
        if (typ == 0)
        {
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            int rows2, columns2;
            cout << "ilosc wierszy drugiej macierzy? " << endl;
            cin >> rows2;
            cout << "ilosc kolumn drugiej macierzy? " << endl;
            cin >> columns2;

            if (rows != rows2 && columns != columns2)
            {
                cout << "macierze maja rozne wymiary" << endl;
                exit(0);
            }

            int **matrixB;
            matrixB = dynamicAllocation1(rows2, columns2);
            matrixB = fillMatrix(matrixB, rows2, columns2);


            int **wynik;
           // wynik = dynamicAllocation1(rows, columns);
            wynik = addMatrix(matrix, matrixB, rows, columns);

            cout << "macierz po dodaniu: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else if (typ == 1)
        {
            double **matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            int rows2, columns2;
            cout << "ilosc wierszy drugiej macierzy? " << endl;
            cin >> rows2;
            cout << "ilosc kolumn drugiej macierzy? " << endl;
            cin >> columns2;

            if (rows != rows2 && columns != columns2)
            {
                cout << "macierze maja rozne wymiary" << endl;
                exit(0);
            }

            double **matrixB;
            matrixB = dynamicAllocation2(rows2, columns2);
            matrixB = fillMatrix(matrixB, rows2, columns2);

            double **wynik;
            // wynik = dynamicAllocation2(rows, columns);
            wynik = addMatrix(matrix, matrixB, rows, columns);

            cout << "macierz po dodaniu: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }
    }


    else if (wybor == "subtractMatrix")
    {
        if (typ == 0)
        {
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            int rows2, columns2;
            cout << "ilosc wierszy drugiej macierzy? " << endl;
            cin >> rows2;
            cout << "ilosc kolumn drugiej macierzy? " << endl;
            cin >> columns2;

            if (rows != rows2 && columns != columns2)
            {
                cout << "macierze maja rozne wymiary" << endl;
                exit(0);
            }

            int **matrixB;
            matrixB = dynamicAllocation1(rows2, columns2);
            matrixB = fillMatrix(matrixB, rows2, columns2);

            int **wynik;
            // wynik = dynamicAllocation1(rows, columns);
            wynik = subtractMatrix(matrix, matrixB, rows, columns);

            cout << "macierz po odejmowaniu: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else if (typ == 1)
        {
            double **matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            int rows2, columns2;
            cout << "ilosc wierszy drugiej macierzy? " << endl;
            cin >> rows2;
            cout << "ilosc kolumn drugiej macierzy? " << endl;
            cin >> columns2;

            if (rows != rows2 && columns != columns2)
            {
                cout << "macierze maja rozne wymiary" << endl;
                exit(0);
            }

            double **matrixB;
            matrixB = dynamicAllocation2(rows2, columns2);
            matrixB = fillMatrix(matrixB, rows2, columns2);

            double **wynik;
            // wynik = dynamicAllocation2(rows, columns);
            wynik = subtractMatrix(matrix, matrixB, rows, columns);

            cout << "macierz po odejmowaniu: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }
    }


    else if (wybor == "multiplyMatrix") {
        if (typ == 0) {
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            int rows2, columns2;
            cout << "ilosc wierszy drugiej macierzy? " << endl;
            cin >> rows2;
            cout << "ilosc kolumn drugiej macierzy? " << endl;
            cin >> columns2;

            int **matrixB;
            matrixB = dynamicAllocation1(rows2, columns2);
            matrixB = fillMatrix(matrixB, rows2, columns2);

            int **wynik;
            // wynik = dynamicAllocation1(rows, columns);
            wynik = multiplyMatrix(matrix, matrixB, rows, columns, columns2);

            cout << "macierz po mnozeniu: " << endl;

            printMatrix(wynik,rows,columns);

        } else if (typ == 1) {
            double **matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            int rows2, columns2;
            cout << "ilosc wierszy drugiej macierzy? " << endl;
            cin >> rows2;
            cout << "ilosc kolumn drugiej macierzy? " << endl;
            cin >> columns2;

            double **matrixB;
            matrixB = dynamicAllocation2(rows2, columns2);
            matrixB = fillMatrix(matrixB, rows2, columns2);

            double **wynik;
            // wynik = dynamicAllocation2(rows, columns);
            wynik = multiplyMatrix(matrix, matrixB, rows, columns, columns2);

            cout << "macierz po mnozeniu: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }
    }


        else if (wybor == "multiplyByScalar")
        {
            if (typ == 0)
            {
                int **matrix;
                matrix = dynamicAllocation1(rows, columns);
                matrix = fillMatrix(matrix, rows, columns);

                int skalar;
                cout << "podaj liczbe: " << endl;
                cin >> skalar;

                int **wynik;
                // wynik = dynamicAllocation1(rows, columns);
                wynik = multiplyByScalar(matrix, rows, columns, skalar);

                cout << "macierz po mnozeniu: " << endl;

                printMatrix(wynik,rows,columns);
            }
            else if (typ == 1)
            {
                double **matrix;
                matrix = dynamicAllocation2(rows, columns);
                matrix = fillMatrix(matrix, rows, columns);

                int skalar;
                cout << "podaj liczbe: " << endl;
                cin >> skalar;

                double **wynik;
                // wynik = dynamicAllocation2(rows, columns);
                wynik = multiplyByScalar(matrix, rows, columns, skalar);

                cout << "macierz po mnozeniu: " << endl;

                printMatrix(wynik,rows,columns);
            }
            else
            {
                cout << "wybor niedostepny " << endl;
            }
        }

    else if (wybor == "transpozeMatrix")
    {
        if (typ == 0)
        {
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            int **wynik;
            // wynik = dynamicAllocation1(rows, columns);
            wynik = transpozeMatrix(matrix, rows, columns);

            cout << "macierz po transpozycji: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else if (typ == 1)
        {
            double **matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            double **wynik;
            // wynik = dynamicAllocation2(rows, columns);
            wynik = transpozeMatrix(matrix, rows, columns);

            cout << "macierz po transpozycji: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }
    }

    else if (wybor == "powerMatrix")
    {
        if (typ == 0)
        {
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            cout << "do jakiej potegi podniesc? " << endl;

            int  potega;
            cin >> potega;
            int **wynik;
            // wynik = dynamicAllocation1(rows, columns);
            wynik = powerMatrix(matrix, rows, columns, potega);

            cout << "macierz po podniesieniu do potegi: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else if (typ == 1)
        {
            double **matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            cout << "do jakiej potegi podniesc? " << endl;

            unsigned potega;
            cin>>potega;
            double **wynik;
            // wynik = dynamicAllocation2(rows, columns);
            wynik = powerMatrix(matrix, rows, columns, potega);

            cout << "macierz po podniesieniu do potegi: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }
    }

    else if (wybor == "determinantMatrix")
    {
        if (typ == 0)
        {
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            if (rows != columns)
            {
                cout << "macierz nie jest kwadratowa" << endl;
                exit(0);
            }

            int wynik;
            wynik = determinantMatrix(matrix, rows, columns);

           cout << "wyznacznik macierzy: " << wynik;
        }
        else if (typ == 1)
        {
            double **matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            if (rows != columns)
            {
                cout << "macierz nie jest kwadratowa" << endl;
                exit(0);
            }

            double wynik;
            wynik = determinantMatrix(matrix, rows, columns);

            cout << "wyznacznik macierzy: " << wynik;
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }
    }






    else if (wybor == "matrixIsDiagonal")
    {
        if (typ == 0)
        {
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);
            if (matrixIsDiagonal(matrix, rows, columns))
                cout << "jest diagonalna ";
            else
                cout << "nie jest diagonalna ";

        }
        else if (typ == 1)
        {
            double **matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);
            if (matrixIsDiagonal(matrix, rows, columns))
                cout << "jest diagonalna ";
            else
                cout << "nie jest diagonalna ";
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }
    }

    else if (wybor == "swap")
    {
        if (typ == 0)
        {
            int rows1, columns1, rows2, columns2;
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);
            cout << "rzad i kolumna pierwszej wartosci do zamiany: " << endl;
            cin >> rows1 >> columns1;
            cout << "rzad i kolumna drugiej wartosci do zamiany: " << endl;
            cin >> rows2 >> columns2;

            int **wynik;
            // wynik = dynamicAllocation1(rows, columns);
            wynik = swap(matrix, rows1, columns1, rows2, columns2);

            cout << "macierz po zamianie: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else if (typ == 1)
        {
            int rows1, columns1, rows2, columns2;
            double**matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);
            cout << "rzad i kolumna pierwszej wartosci do zamiany: " << endl;
            cin >> rows1 >> columns1;
            cout << "rzad i kolumna drugiej wartosci do zamiany: " << endl;
            cin >> rows2 >> columns2;

            double **wynik;
            // wynik = dynamicAllocation2(rows, columns);
            wynik = swap(matrix, rows1, columns1, rows2, columns2);

            cout << "macierz po zamianie: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }

    }

    else if (wybor == "sortRowsInMatrix")
    {
        if (typ == 0)
        {
            int **matrix;
            matrix = dynamicAllocation1(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            int **wynik;
            // wynik = dynamicAllocation1(rows, columns);
            wynik = sortRowsInMatrix(matrix, rows, columns);

            cout << "macierz po posortowaniu: " << endl;


            printMatrix(wynik,rows,columns);
        }
        else if (typ == 1)
        {
            double **matrix;
            matrix = dynamicAllocation2(rows, columns);
            matrix = fillMatrix(matrix, rows, columns);

            double **wynik;
            // wynik = dynamicAllocation2(rows, columns);
            wynik = sortRowsInMatrix(matrix, rows, columns);

            cout << "macierz po posortowaniu: " << endl;

            printMatrix(wynik,rows,columns);
        }
        else
        {
            cout << "wybor niedostepny " << endl;
        }
    }


}

