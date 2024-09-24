#include <iostream>
#include <vector>

std::vector<std::vector<int>> transponir(const std::vector<std::vector<int>>& v)
{
    int str = v.size();
    int col = v[0].size();
    std::vector<std::vector<int>> tranmatr(col, std::vector<int>(str));
    
    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tranmatr[j][i] = v[i][j]; 
        }
    }
    
    return tranmatr;
}

int main()
{
    std::vector<int> v1  {1, 2, 3};
    std::vector<int> v2  {2, 3, 4};
    std::vector<int> v3  {5, 6, 7};
    
    std::vector<std::vector<int>> matr = {v1, v2, v3};
    
    std::vector<std::vector<int>> matrResult = transponir(matr); // передаём matr
    
    for (const auto& row : matrResult)
    {
        for (int value : row)
        {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
}
