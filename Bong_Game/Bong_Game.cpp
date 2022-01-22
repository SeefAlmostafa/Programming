
using namespace std;
#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>


enum eDir { STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 };

class cBall {

private:
	int x, y;
	int orginalX, orginalY;
	eDir direction;

public:

	cBall(int posX, int posY) {
		orginalX = posX;
		orginalY = posY;
		x = posX;
		y = posY;
		direction = STOP;
	}

	void Reset() {
		x = orginalX;
		y = orginalY;
		direction = STOP;
	}

	void changeDirection(eDir d) {
		direction = d;
	}

	void randomDirection() {
		direction = (eDir)((rand() % 6) + 1);
	}

	inline int getX() { return x; }
	inline int getY() { return y; }
	inline eDir getDirection() { return direction; }

	void Move() {
		switch (direction) {
		case STOP:
			break;
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		case UPLEFT:
			x--; y--;
			break;
		case DOWNLEFT:
			x--; y++;
			break;
		case UPRIGHT:
			x++; y--;
			break;
		case DOWNRIGHT:
			x++; y++;
			break;
		default:
			break;
		}
	}
	friend ostream& operator<<(ostream& o, cBall c) {
		o << "Ball[" << c.x << "," << c.y << "][" << c.direction << "]";
		return o;
	}
};


class cPaddle {
private:
	int x, y;
	int orginalX, orginalY;
public:
	cPaddle() {
		x = y = 0;
	}
	cPaddle(int posX, int posY) {
		orginalX = posX;
		orginalY = posY;
		x = posX;
		y = posY;
	}

	inline void Reset() { x = orginalX; y = orginalY; }
	inline int getX() { return x; }
	inline int getY() { return y; }
	inline void MoveUp() { y = y - 3; }
	inline void MoveDown() { y = y + 3; }

	friend ostream& operator<<(ostream& o, cPaddle c) {
		o << "Paddle [" << c.x << "," << c.y << "]";
		return o;
	}
};

class cGameManger {
private:
	int width, height;
	int score1, score2;
	char up1, down1, up2, down2;// control players up/down
	bool quit;
	cBall* ball;
	cPaddle* player1;
	cPaddle* player2;
public:
	cGameManger(int w, int h) {
		srand(time(NULL));
		quit = false;
		up1 = 'w';
		up2 = 'i';
		down1 = 's';
		down2 = 'k';
		score1 = score2 = 0;
		width = w;
		height = h;
		ball = new cBall(w / 2, h / 2); // play the ball in the middle
		player1 = new cPaddle(1, h / 2 - 3); // position player1 in the middle
		player2 = new cPaddle(w - 2, h / 2 - 3);// position player2 in the middle & shift him one block to right (w-2)
	}

	~cGameManger() {
		delete ball, player1, player2;
	}

	void ScoreUp(cPaddle* player) {
		if (player == player1)
			score1++;

		else if (player == player2)
			score2++;

		// is the game done? then reset everthing !
		ball->Reset();
		player1->Reset();
		player2->Reset();
	}

	void clearScreen(){
		HANDLE hOut;
		COORD Position;

		hOut = GetStdHandle(STD_OUTPUT_HANDLE);

		Position.X = 0;
		Position.Y = 0;
		SetConsoleCursorPosition(hOut, Position);
	}

	void Draw() {
		for (int i = 0; i < width + 2; i++)
			cout << "\xB2";
		cout << endl;

		for (int i = 0; i < height; i++) {	  // i = y cordinate
			for (int j = 0; j < width; j++) { // j = x cordinate
				int ballx = ball->getX();
				int bally = ball->getY();
				int player1x = player1->getX();
				int player2x = player2->getX();
				int player1y = player1->getY();
				int player2y = player2->getY();

				if (j == 0)
					cout << "\xB2";

				if (ballx == j && bally == i)
					cout << "O"; // ball

				else if (player1x == j && player1y == i)
					cout << "\xDB"; // player1

				else if (player2x == j && player2y == i)
					cout << "\xDB"; // player2

				else if (player1x == j && player1y + 1 == i)
					cout << "\xDB";

				else if (player1x == j && player1y + 2 == i)
					cout << "\xDB";

				else if (player1x == j && player1y + 3 == i)
					cout << "\xDB";


				else if (player2x == j && player2y + 1 == i)
					cout << "\xDB";

				else if (player2x == j && player2y + 2 == i)
					cout << "\xDB";

				else if (player2x == j && player2y + 3 == i)
					cout << "\xDB";

				else
					cout << " "; // nothting

				if (j == width - 1)
					cout << "\xB2";
			}

			cout << endl;
		}

		for (int i = 0; i < width + 2; i++)
			cout << "\xB2";

		cout << endl;
		cout << "Score 1:" << score1 << endl << "Score 2:" << score2 << endl;
	}

	void Input() {
		ball->Move();
		int ballx = ball->getX();
		int bally = ball->getY();
		int player1x = player1->getX();
		int player2x = player2->getX();
		int player1y = player1->getY();
		int player2y = player2->getY();

		if (_kbhit()) {
			char current = _getch();
			if (current == up1)
				if (player1y > 0)
					player1->MoveUp();

			if (current == up2)
				if (player2y > 0)
					player2->MoveUp();

			if (current == down1)
				if (player1y + 4 < height) // (+4) because we have 4 sigments 
					player1->MoveDown();


			if (current == down2)
				if (player2y + 4 < height)
					player2->MoveDown();

			// if the ball has stopped and 
			// we pressed any key 
			if (ball->getDirection() == STOP)
				ball->randomDirection(); // then randomise the Direction of the ball

			if (current == 'q')
				quit = true;
		}

	}

	void Logic() {
		int ballx = ball->getX();
		int bally = ball->getY();
		int player1x = player1->getX();
		int player2x = player2->getX();
		int player1y = player1->getY();
		int player2y = player2->getY();

		// left paddle
		for (int i = 0; i < 4; i++)
			if (ballx == player1x + 1)
				if (bally == player1y + i)
					ball->changeDirection((eDir)((rand() % 3) + 4));

		// right paddle
		for (int i = 0; i < 4; i++)
			if (ballx == player2x - 1)
				if (bally == player2y + i)
					ball->changeDirection((eDir)((rand() % 3) + 1)); // STOP is not included


		// bottom wall															 
		if (bally == height - 1)
			ball->changeDirection(ball->getDirection() == DOWNRIGHT ? UPRIGHT : UPLEFT);


		// top wall															 
		if (bally == 0)
			ball->changeDirection(ball->getDirection() == UPRIGHT ? DOWNRIGHT : DOWNLEFT);

		// right wall
		if (ballx == width - 1)
			ScoreUp(player1);

		// left wall
		if (ballx == 0)
			ScoreUp(player2);
	}
	void set_cursor(bool visible) {
		CONSOLE_CURSOR_INFO info;
		info.dwSize = 100;
		info.bVisible = visible;
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
	}
	void Run() {
		set_cursor(false);
		while (!quit) {
			Draw();
			Input();
			Logic();
			clearScreen();
		}
	}
};

int main() {

	cGameManger c(40, 20);

	c.Run();

	return 0;
}

