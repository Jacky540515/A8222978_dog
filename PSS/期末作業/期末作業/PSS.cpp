#include "PSS.h"

int PSS::pWin = 0;
int PSS::cWin = 0;
PSS::PSS()
{

}
void PSS::pc(int player, int computer)
{
	if (player == computer)
		cout << "      ����" << endl;
    else if (player == 1 && computer == 3 || player == 2 && computer == 1 || player == 3 && computer == 2)
    {
        cout << "     �AĹ�F !" << endl;
        pWin++;
    }
    else if (player == 1 && computer == 2 || player == 2 && computer == 3 || player == 3 && computer == 1)
    {
        cout << "     �A��F " << endl;
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