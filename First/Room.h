#pragma once
#include "Point2D.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

class Room
{
public:
	const static int MAX = 2;
	Room();
	~Room();
private:
	Point2D center;
	Point2D health[MAX];
	Point2D ammo[MAX];
	Point2D objects[4];
	int width, height, counterAmmo, counterHealth;
public:
	int counterObject;
public:
	Room(const Point2D& center_point, int w, int h);
	Point2D GetCenter() const;
	bool isInRoom(int x, int y);
	int GetWidth();
	int GetHeight();
	void addAmmo();
	void addHealth();
	void addObjects();
	int generateRandCord(int cordStart, int cordEnd, int check);
	Point2D* getAmmo();
	Point2D* getHealth();
	Point2D* getObjects();
	bool IsOverlap(const Room& other);
};

