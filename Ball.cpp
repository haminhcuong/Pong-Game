#include "Ball.h"

Ball::Ball(int pX, int pY)
{
	oX = pX;
	oY = pY;
	x = pX;
	y = pY;
	huong = stop;
}

Ball::~Ball()
{
}

void Ball::reset()
{
	x = oX;
	y = oY;
	huong = stop;
}

void Ball::chuyenHuong(dir h)
{
	huong = h;
}

void Ball::randomHuong()
{
	huong = (dir)((rand() % 6) + 1);
}

int Ball::getX()
{
	return x;
}

int Ball::getY()
{
	return y;
}

dir Ball::getHuong()
{
	return huong;
}

void Ball::move()
{
	switch (huong)
	{
	case stop:
		break;
	case Left:
		x--;
		break;
	case upLeft:
		x--;
		y--;
		break;
	case downLeft:
		x--;
		y++;
		break;
	case Right:
		x++;
		break;
	case upRight:
		x++;
		y--;
		break;
	case downRight:
		x++;
		y++;
		break;
	}
}



ostream& operator<<(ostream& os, Ball b)
{
	os << "Ball (" << b.x << "," << b.y << ")(" << b.huong << ")" << endl;
	return os;
}
