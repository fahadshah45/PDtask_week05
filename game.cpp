#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
void printPlayer();
void erasePlayer();
void movePlayerRight();
void movePlayerLeft();
char getCharAtxy(short int x, short int y);
void gotoxy(int x,int y);

int ex1 = 4, ey1 = 1; 
int ex2 = 88, ey2 = 1;
int ex3 = 45, ey3 = 1;
int px = 41, py = 23;

int main(){
	system("cls");
	printMaze();
	printEnemy1();
	printEnemy2();
	printEnemy3();
	printPlayer();
while(true)
	{
if (GetAsyncKeyState(VK_LEFT))
{
movePlayerLeft();
}
if (GetAsyncKeyState(VK_RIGHT))
{
movePlayerRight();
}
	moveEnemy1();
	moveEnemy2();
	moveEnemy3();
	Sleep(200);
	}
}

void printEnemy1(){
	
	gotoxy(ex1,ey1);
	cout << " _________ ";
	gotoxy(ex1,ey1+1);
	cout << " |*******| ";
	gotoxy(ex1,ey1+2);
	cout << " |=|   |=| ";
	gotoxy(ex1,ey1+3);
	cout << " |=|   |=| ";
	gotoxy(ex1,ey1+4);
	cout << "   \\   / ";
	gotoxy(ex1,ey1+5);
	cout << "     *     ";
}

void eraseEnemy1(){
	gotoxy(ex1,ey1);
	cout << "           ";
	gotoxy(ex1,ey1+1);
	cout << "           ";
	gotoxy(ex1,ey1+2);
	cout << "           ";
	gotoxy(ex1,ey1+3);
	cout << "           ";
	gotoxy(ex1,ey1+4);
	cout << "           ";
	gotoxy(ex1,ey1+5);
	cout << "           ";
}

void moveEnemy1(){
eraseEnemy1();
ex1 = ex1 + 1;
if(ex1 == 35)
{
ex1 = 4;
}
printEnemy1();
}

void printEnemy2(){
	
	gotoxy(ex2,ey2);
	cout << " _________ ";
	gotoxy(ex2,ey2+1);
	cout << " |*******| ";
	gotoxy(ex2,ey2+2);
	cout << " |=|   |=| ";
	gotoxy(ex2,ey2+3);
	cout << " |=|   |=| ";
	gotoxy(ex2,ey2+4);
	cout << "   \\   / ";
	gotoxy(ex2,ey2+5);
	cout << "     *     ";
}
void eraseEnemy2(){
	gotoxy(ex2,ey2);
	cout << "           ";
	gotoxy(ex2,ey2+1);
	cout << "           ";
	gotoxy(ex2,ey2+2);
	cout << "           ";
	gotoxy(ex2,ey2+3);
	cout << "           ";
	gotoxy(ex2,ey2+4);
	cout << "           ";
	gotoxy(ex2,ey2+5);
	cout << "           ";
}
void moveEnemy2(){
eraseEnemy2();
ex2 = ex2 - 1;
if(ex2 == 55)
{
ex2 = 88;
}
printEnemy2();
}

void printEnemy3(){
	
	gotoxy(ex3,ey3);
	cout << " _________ ";
	gotoxy(ex3,ey3+1);
	cout << " |*******| ";
	gotoxy(ex3,ey3+2);
	cout << " |=|   |=| ";
	gotoxy(ex3,ey3+3);
	cout << " |=|   |=| ";
	gotoxy(ex3,ey3+4);
	cout << "   \\   / ";
	gotoxy(ex3,ey3+5);
	cout << "     *     ";
}
void eraseEnemy3(){
	gotoxy(ex3,ey3);
	cout << "           ";
	gotoxy(ex3,ey3+1);
	cout << "           ";
	gotoxy(ex3,ey3+2);
	cout << "           ";
	gotoxy(ex3,ey3+3);
	cout << "           ";
	gotoxy(ex3,ey3+4);
	cout << "           ";
	gotoxy(ex3,ey3+5);
	cout << "           ";
}
void moveEnemy3(){
eraseEnemy3();
ex3 = ex3 - 2;
ey3 = ey3 + 1;
if(ex3 == 23 )
{
ex3 = 45;
ey3 = 1;
}
printEnemy3();
}

void printMaze(){
	cout << "#############################################################################################################" << endl;
	cout << "#|---------------------------------------------------------------------------------------------------------|#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#|                                                                                                         |#" << endl;
	cout << "#############################################################################################################" << endl;
}
void printPlayer()
	{
	gotoxy(px,py);
	cout << "      /~~\\     "<<endl;
	gotoxy(px,py+1);
	cout << "     _|~~|_    "<<endl;
	gotoxy(px,py+2);
	cout << "  ~~  |  |  ~~  "<<endl;
	gotoxy(px,py+3);
	cout << " =====.  .===== "<<endl;
	gotoxy(px,py+4);
	cout << "      ||||      "<<endl;
}
void erasePlayer()
	{
	gotoxy(px,py);
	cout << "                "<<endl;
	gotoxy(px,py+1);
	cout << "                "<<endl;
	gotoxy(px,py+2);
	cout << "                "<<endl;
	gotoxy(px,py+3);
	cout << "                "<<endl;
	gotoxy(px,py+4);
	cout << "                "<<endl;
}
void movePlayerLeft() {
if (getCharAtxy(px - 1, py) == ' ')
{
erasePlayer();
px = px -1;
printPlayer();
}
}
 
void movePlayerRight() {
if (getCharAtxy(px + 17, py) == ' ')
{
erasePlayer();
px = px +1;
printPlayer();
}
}

void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
