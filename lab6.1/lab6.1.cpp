
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 25;

// Формування масиву випадкових чисел
void CreateArray(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = 15 + rand() % 80;
    }
}

// Виведення масиву в один рядок
void PrintArray(const int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << p[i];
    }
    cout << endl;
}

// Перевірка критерію
bool IsTargetIndex(int i)
{
    return !(i % 2 == 0 && i % 13 == 0);
}

// Обчислення кількості елементів
int CountElements(const int p[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (IsTargetIndex(i))
            count++;
    }

    return count;
}

// Обчислення суми елементів
int SumElements(const int p[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (IsTargetIndex(i))
            sum += p[i];
    }

    return sum;
}

// Заміна потрібних елементів нулями
void ZeroElements(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsTargetIndex(i))
            p[i] = 0;
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int p[N];

    CreateArray(p, N);

    cout << "Original array:\n";
    PrintArray(p, N);

    int count = CountElements(p, N);
    int sum = SumElements(p, N);

    ZeroElements(p, N);

    cout << "\nNumber of elements: " << count << endl;
    cout << "Sum of elements: " << sum << endl;

    cout << "\nModified array:\n";
    PrintArray(p, N);

    return 0;
}
