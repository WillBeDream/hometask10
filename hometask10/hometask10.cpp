// hometask10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void print_massiv(int* array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int summ_elements(int* array, size_t size)
{
    int res = 0;
    for (size_t i = 0; i < size; i++)
    {
        res += array[i];
    }
    return res;
}
int mult(int* array, size_t size)
{
    int res = 1;
    for (size_t i = 0; i < size; i++)
    {
        res *= array[i];
    }
    return res;
}
int min(int* array, size_t size)
{
    int min = array[0];
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}
int max(int* array, size_t size)
{
    int max = array[0];
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int average(int* array, size_t size)
{
    int max = 0;
    for (size_t i = 0; i < size; i++)
    {
        max += array[i];
    }
    int average = max / size;
    return average;
}
int search_elem(int* array, size_t size, int elem)
{
    int index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == elem)
        {
            index = i;
        }
    }
    return index;
}
bool elem(int* array, size_t size, int elemen)
{
    for (size_t i = 0; i < size; i++)
    {
        if (elemen == array[i])
        {
            return true;
        }
        else
            return false;
    }
}
void buble_sort(int* array, size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tnp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tnp;
            }
        }
    }
}
void Isort(int* array, size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        for (size_t j = i; j > 0 && array[j - 1] > array[j]; j--)
        {
            int tmp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = tmp;
        }
    }
}
void insert_array(int** array, size_t size, int value, size_t index)
{
    int* copy = new int[size + 1];
    for (size_t i = 0; i < index; i++)
    {
        copy[i] = *(array)[i];
    }
    copy[index] = value;
    for (size_t i = index+1; i <=size; i++)
    {
        copy[i] = (*array)[i - 1];
    }
    delete[] *array;
    *array= copy;
}
void delete_elem(int** array, size_t size, size_t index)
{
    int* copy = new int[size - 1];
    for (size_t i = 0; i < index; i++)
    {
        copy[i] = (*array)[i];
    }
    for (size_t i = index; i <= size; i++)
    {
        copy[i] = (*array)[i + 1];
    }
    delete[] * array;
    *array = copy;
}
int main()
{
    int size;
    cin >> size;
    int* array = new int[size];
    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
    }
    
    /*int Average = average(array, size);
    cout << Average << endl;*/

    print_massiv(array, size);
    cout << endl;
    /* int Index = search_elem(array, size, 0);
     cout << Index << endl;*/
     /*buble_sort(array, size);*/
  
    /*insert_array(&array, size, 7, 1);*/
    delete_elem(&array, size, 1);
    print_massiv(array, size-1);
    delete[] array;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
