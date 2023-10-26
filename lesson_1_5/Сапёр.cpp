#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    size_t m, n;
    int mines_count;
    int x, y;
    cin >> m >> n >> mines_count;

    vector<vector<string>> matrix(m, vector<string>(n));

    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            matrix[i][j] = "0";
        }
        std::cout << "\n";
    }

    for(int i = 0; i < mines_count; i++){
        cin >> x >> y;
        matrix[x][y] = "*";
    }

    int mines = 0;
    for(size_t i = 0; i != m; ++i){
        for(size_t j = 0; j != n; ++j){
            if(i == 0 && j == 0){
                if(matrix[i + 1][j] == "*"){mines++;}
                if(matrix[i + 1][j + 1] == "*"){mines++;}
                if(matrix[i][j + 1] == "*"){mines++;}
            }
            if(i == n && i == m){
                if(matrix[i - 1][j] == "*"){mines++;}
                if(matrix[i - 1][j - 1] == "*"){mines++;}
                if(matrix[i][j - 1] == "*"){mines++;}
            }
            if(i == 0 && j == n){
                if(matrix[i + 1][j] == "*"){mines++;}
                if(matrix[i + 1][j - 1] == "*"){mines++;}
                if(matrix[i][j - 1] == "*"){mines++;}
            }
            if(i == m && j == 0){
                if(matrix[i - 1][j] == "*"){mines++;}
                if(matrix[i - 1][j + 1] == "*"){mines++;}
                if(matrix[i][j + 1] == "*"){mines++;}
            }
            if(i == 0 && j != 0 && j != n){
                if(matrix[i][j - 1] == "*"){mines++;}
                if(matrix[i][j + 1] == "*"){mines++;}
                if(matrix[i + 1][j - 1] == "*"){mines++;}
                if(matrix[i + 1][j] == "*"){mines++;}
                if(matrix[i + 1][j + 1] == "*"){mines++;}
            }
            if(i != 0 && i != m && j == 0){
                if(matrix[i - 1][j] == "*"){mines++;}
                if(matrix[i - 1][j + 1] == "*"){mines++;}
                if(matrix[i][j + 1] == "*"){mines++;}
                if(matrix[i + 1][j] == "*"){mines++;}
                if(matrix[i + 1][j + 1] == "*"){mines++;}
            }
            if(i != 0 && i != m && j == n){
                if(matrix[i - 1][j] == "*"){mines++;}
                if(matrix[i - 1][j - 1] == "*"){mines++;}
                if(matrix[i][j - 1] == "*"){mines++;}
                if(matrix[i + 1][j - 1] == "*"){mines++;}
                if(matrix[i + 1][j] == "*"){mines++;}
            }
            if(i == m && j != n && j != 0){
                if(matrix[i][j - 1] == "*"){mines++;}
                if(matrix[i - 1][j - 1] == "*"){mines++;}
                if(matrix[i - 1][j] == "*"){mines++;}
                if(matrix[i - 1][j + 1] == "*"){mines++;}
                if(matrix[i][j + 1] == "*"){mines++;}
            }
            if(i != 0 && i != m && j != 0 && j != n){
                if(matrix[i - 1][j - 1] == "*"){mines++;}
                if(matrix[i - 1][j] == "*"){mines++;}
                if(matrix[i - 1][j + 1] == "*"){mines++;}
                if(matrix[i][j + 1] == "*"){mines++;}
                if(matrix[i + 1][j + 1] == "*"){mines++;}
                if(matrix[i + 1][j] == "*"){mines++;}
                if(matrix[i + 1][j - 1] == "*"){mines++;}
                if(matrix[i][j - 1] == "*"){mines++;}
            }
            matrix[i][j] = to_string(mines);
        }
    }

    // напечатаем матрицу, выводя элементы через табуляцию
    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}