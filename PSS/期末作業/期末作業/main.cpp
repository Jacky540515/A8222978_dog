#include "PSS.h"
#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int main()
{
    PSS shao;
    //設定亂數
    srand(time(NULL));
    //
    int player = 0, computer;

    cout << "(1)剪刀 (2)石頭 (3)布 " << endl;
    while(1)
    {
        cout << "(若要結束遊戲請輸入-1)\n請出拳: ";
        cin >> player;
       
        if (player == -1)
            return 0;

        computer = rand() % 3 + 1;
        


        if (player < -1 || player == 0 || player >3)
            cout << "你輸入不正確的號碼" << endl;
        else
        {
            shao.pc(player, computer);
            if (computer == 1)
                cout << "電腦出剪刀" << endl;
            else if (computer == 2)
                cout << "電腦出石頭" << endl;
            else if (computer == 3)
                cout << "電腦出布" << endl;

                        
            cout << "       比  數" << endl;
            cout << "玩家: " << shao.getPWin() << "  VS  " << "電腦: " << shao.getCWin() << endl;
            cout << "----------------------" << endl;
        }
    }


    system("pause");
    return 0;
}