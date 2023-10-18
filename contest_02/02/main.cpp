#include <iostream>
#include <vector>
#include <string>
bool is_can_exit_from_maze(std::vector<std::string>& maze, int r, int c)
{
    if (maze[r][c] == 'E') return true;
    maze[r][c] = 'x';
    if (maze[r + 1][c] != 'x' && maze[r + 1][c] != '#') return 0 + is_can_exit_from_maze(maze, r + 1, c);
    if (maze[r - 1][c] != 'x' && maze[r - 1][c] != '#') return 0 + is_can_exit_from_maze(maze, r - 1, c);
    if (maze[r][c + 1] != 'x' && maze[r][c + 1] != '#') return 0 + is_can_exit_from_maze(maze, r, c + 1);
    if (maze[r][c - 1] != 'x' && maze[r][c - 1] != '#') return 0 + is_can_exit_from_maze(maze, r, c - 1);
    return false;
}
int main(){
    int row, col, rows, cols;
    std::cin >> row >> col >> rows >> cols;
    std::cin.ignore(1); // Игнорируем перевод строки, застрявший в потоке ввода
    
    std::vector<std::string> maze(rows);
    for(auto& line : maze) std::getline(std::cin, line);
    
    std::cout << (is_can_exit_from_maze(maze, row, col) ? "YES" : "NO") << std::endl;
}
