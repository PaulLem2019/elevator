#ifndef _elev_h_
#define _elev_h_

class Elev
{
	public:
	Elev (int=0);
	int ElevMove(int=0);
	int ElevFloor();
	private:
	int floor=0;
	int move =0;
	int ToFloor=0;
};

#endif
