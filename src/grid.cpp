#include <raylib.h>
#include "grid.hpp"

void Grid::Draw()
{
    for(int row = 0; row < rows ; row++)
    {
         for(int column = 0; column < columns ; column++)
        {
            //if the cell has a value that is not zero then the cell will be green.
            Color color = cells[row][column] ? Color{0,255,0,255} : Color{55,55,55,55};
            DrawRectangle(column*columns, row*rows, cellSize-1, cellSize-1, color);
        }

    }
}

void Grid::SetValue(int row, int column, int value)
{
    if(row>=0 && row<rows && columns>=0 && column<columns)
    {
        cells[row][column] = value;
    }

}
