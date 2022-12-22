#include "iostream"

void sort(int** a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
//                    std::cout << a[i][j] << " " << a[k][l] << " " << i << j << std::endl;
                    if (a[i][j] > a[k][l])
                    {
//                       std::cout << a[i][j] << " " << a[k][l] << std::endl;
                        int temp = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = temp;
                    }
                }
            }
        }
    }
}

void printArr(int **a, int n)
{
    std::cout << "******************************************" << std::endl;
    std::cout << "*************** Massiv a: ****************" << std::endl;
    std::cout << "******************************************" << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "a[" << i << "][" << j << "]=" << a[i][j] << "; ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int** arr = new int*[3];
//    int **a = {
//            {31, 25, 6},
//            {11, 15, 16},
//            {12, 53, 26},
//    };
    for (int i = 0; i < 3; ++i) {
        arr[i] = new int[3];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> arr[i][j];
        }
    }
    printArr(arr, 3);

    sort(arr, 3);

    printArr(arr, 3);
    delete[] arr;
}