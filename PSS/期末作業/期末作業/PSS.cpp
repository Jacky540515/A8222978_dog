#include "PSS.h"

int PSS::pWin = 0;
int PSS::cWin = 0;
PSS::PSS()
{

}
void PSS::pc(int player, int computer)
{
	if (player == computer)
		cout << "      平手" << endl;
    else if (player == 1 && computer == 3 || player == 2 && computer == 1 || player == 3 && computer == 2)
    {
        cout << "     你贏了 !" << endl;
        pWin++;
    }
    else if (player == 1 && computer == 2 || player == 2 && computer == 3 || player == 3 && computer == 1)
    {
        cout << "     你輸了 " << endl;
        cWin++;
    }
}

int PSS::getPWin()
{
    return pWin;
}
int PSS::getCWin()
{
    return cWin;
}