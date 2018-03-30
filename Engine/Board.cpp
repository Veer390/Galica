#include "board.h"
#include <assert.h>

void board::GridToPixelDraw(vector<int> vec, Graphics & gfx, Color c)
{
	assert(vec.x < gfx.ScreenWidth / 5);
	assert(vec.y < gfx.ScreenHeight / 5);
	int i, j;
	int iX = vec.x * 5;
	int iY = vec.y * 5;
	for (i = iX; i < iX + 5; i++)
	{
		for (j = iY; j < iY + 5; j++)
		{
			gfx.PutPixel(i, j, c);
		}

	}
}

void board::ScoreToPixelDraw(vector<int> vec, Graphics & gfx, Color c)
{
	assert(vec.x < gfx.ScreenWidth / 10);
	assert(vec.y < gfx.ScreenHeight / 10);
	int i, j;
	int iX = vec.x * 10;
	int iY = vec.y * 10;
	for (i = iX; i < iX + 3; i++)
	{
		for (j = iY; j < iY + 8; j++)
		{
			gfx.PutPixel(i, j, c);
		}

	}
}
