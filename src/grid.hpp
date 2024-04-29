#pragma once
#include <vector>

using namespace std;

//creating a grid class with cellsize, rows, columns and drawing a rectangle
class Grid
{   
public:
//a constructor for grid class
Grid(int width, int height, int cellSize) 
:rows(height/cellSize), columns(width/cellSize), cellSize(cellSize), cells(rows, vector<int>(columns,0)){};
void Draw();
void SetValue(int row, int column, int value);


private:

int rows;
int columns;
int cellSize;
vector<vector<int>> cells;


};