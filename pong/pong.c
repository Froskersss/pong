#include <stdio.h>
#include <stdlib.h>
#include "raylib.h"

int main(){
	int screenWidth = GetMonitorWidth(0);
	int screenHeight = GetMonitorHeight(0);
	InitWindow(screenWidth,screenHeight,"Pong");
	SetTargetFPS(60);
	while(!WindowShouldClose()){
		BeginDrawing();
		ClearBackground(BLACK);
		DrawLine(200,200,800,200,WHITE);

		DrawFPS(10,10);

		EndDrawing();

	}
}
