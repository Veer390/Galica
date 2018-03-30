#pragma once
#include "vector.h"
#include "Graphics.h"
#include "Colors.h"

class board
{
public:
void GridToPixelDraw(vector<int> vec, Graphics& gfx,Color c);
void ScoreToPixelDraw(vector<int> vec, Graphics& gfx, Color c);


};