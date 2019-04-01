#include "Room.h"

Room::Room()
{
}


Room::~Room()
{
}


Room::Room(const Point2D& center_point, int w, int h)
{
	counterHealth = 0;
	counterAmmo = 0;
	center = center_point;
	width = w;
	height = h;
}


Point2D Room::GetCenter() const
{
	return center;
}


int Room::GetWidth()
{
	return width;
}


int Room::GetHeight()
{
	return height;
}


bool Room::IsOverlap(const Room& other)
{
	return abs(center.GetX() - other.GetCenter().GetX())
		< (width + other.width) / 2 + 5 && abs(center.GetY() -
			other.GetCenter().GetY()) < (height + other.height) / 2 + 5;
}

bool Room::isInRoom(int x, int y)
{
	if ((center.GetX() - GetWidth() / 2) < x && x < (center.GetX() + GetWidth() / 2))
	{
		if ((center.GetX() - GetHeight() / 2) < y && y < (center.GetX() + GetHeight() / 2))
		{
			return true;
		}
	}
	return false;
}

void Room::addAmmo()
{
	// Generate randomize ammo in the room. 
	if (counterAmmo < MAX)
	{
		int widthStart, widthEnd, heightStart, heightEnd, randX, randY;
		widthStart = center.GetX() - width / 2;
		widthEnd = center.GetX() + width / 2;
		heightStart = center.GetY() - height / 2;
		heightEnd = center.GetY() + height / 2;
		randX = generateRandCord(widthStart, widthEnd , 0);
		randY = generateRandCord(heightStart, heightEnd , 0);
		Point2D tempAmmo(randX, randY);
		ammo[counterAmmo] = tempAmmo;
		counterAmmo++;

	}
}

int Room::generateRandCord(int cordStart, int cordEnd , int check)
{
	int random = 0;
	srand(time(NULL));
	do {
		random = std::rand() % cordEnd - check;
	} while (random > cordEnd || random < cordStart);
	return random;
}

void Room::addHealth()
{
	// Generate randomize health in the room. 
	if (counterHealth < MAX)
	{
		int widthStart, widthEnd, heightStart, heightEnd, randX, randY;
		widthStart = center.GetX() - width / 2;
		widthEnd = center.GetX() + width / 2;
		heightStart = center.GetY() - height / 2;
		heightEnd = center.GetY() + height / 2;
		randX = generateRandCord(widthStart, widthEnd , 2);
		randY = generateRandCord(heightStart, heightEnd , 2);
		Point2D tempHealth(randX, randY);
		health[counterHealth] = tempHealth;
		counterHealth++;
	}
}

Point2D* Room::getAmmo()
{
	return ammo;
}

Point2D* Room::getHealth()
{
	return health;
}