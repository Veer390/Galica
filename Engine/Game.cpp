
#include "MainWindow.h"
#include "Game.h"
#include "vector.h"


Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	Brd.GridToPixelDraw({ 199,199 }, gfx, { 255,255,255 });
}

void Game::ComposeFrame()
{
	
}
