#include <iostream>
#include "elev.h"

using namespace std;

Elev::Elev(int floor)
{
	ElevMove(floor);
}

int Elev::ElevMove(int ToFloor1)
{
	ToFloor=ToFloor1;
	
	if (ToFloor > floor)
	{
		move=1;
	}
	else
	{
		if(ToFloor < floor)
		{
			move = -1;
		}
		else
		{
			move = 0;
		}
	}
	return ToFloor;
}

int Elev::ElevFloor()
{
	if(ToFloor!=floor)
	{
		floor += move;
	}
	
	return floor;
}

int main()
{
	Elev Elevator;
	
	Elevator.ElevMove(5);
	
	
	for(int i=0;i<6;i++)
	{
		cout << Elevator.ElevFloor() << endl;
	}
	
	
	return 0;
}
