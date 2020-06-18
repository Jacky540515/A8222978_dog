#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
#ifndef PSS_H
#define PSS_H

class PSS
{
private:
	static int pWin, cWin;
public:
	PSS();
	void pc(int, int);
	int getPWin();
	int getCWin();
};
#endif // !PSS_H
