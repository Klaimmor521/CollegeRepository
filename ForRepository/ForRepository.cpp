#include <iostream>
#include <vector>
using std::cout;
using std::vector;

bool findNumber(const vector<vector<int>>& matrix, int target, int row, int col, int& rowIndex, int& colIndex) 
{
    //Если вышли за пределы строк, возвращаем false
    if (row >= matrix.size()) return false;

    //Если вышли за пределы столбцов, переходим на следующую строку
    if (col >= matrix[row].size()) 
        return findNumber(matrix, target, row + 1, 0, rowIndex, colIndex);

    //Если элемент найден, сохраняем его индексы и возвращаем true
    if (matrix[row][col] == target) 
    {
        rowIndex = row;
        colIndex = col;
        return true;
    }

    return findNumber(matrix, target, row, col + 1, rowIndex, colIndex);
}

int main()
{
    vector<vector<int>> matrix =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 8; 
    int rowIndex = -1, colIndex = -1; 

    if (findNumber(matrix, target, 0, 0, rowIndex, colIndex))
        cout << "Number was found at (" << rowIndex << ", " << colIndex << ")\n";
    else
        cout << "Number wasn't found!\n";
}