#include "PSS.h"
#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int main()
{
    PSS shao;
    //�]�w�ü�
    srand(time(NULL));
    //
    int player = 0, computer;

    cout << "(1)�ŤM (2)���Y (3)�� " << endl;
    while(1)
    {
        cout << "(�Y�n�����C���п�J-1)\n�ХX��: ";
        cin >> player;
       
        if (player == -1)
            return 0;

        computer = rand() % 3 + 1;
        


        if (player < -1 || player == 0 || player >3)
            cout << "�A��J�����T�����X" << endl;
        else
        {
            shao.pc(player, computer);
            if (computer == 1)
                cout << "�q���X�ŤM" << endl;
            else if (computer == 2)
                cout << "�q���X���Y" << endl;
            else if (computer == 3)
                cout << "�q���X��" << endl;

                        
            cout << "       ��  ��" << endl;
            cout << "���a: " << shao.getPWin() << "  VS  " << "�q��: " << shao.getCWin() << endl;
            cout << "----------------------" << endl;
        }
    }


    system("pause");
    return 0;
}