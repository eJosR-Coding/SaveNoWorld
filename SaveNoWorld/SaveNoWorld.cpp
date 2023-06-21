#include "pch.h"
#include "conio.h"
#include "iostream"
#include "Header.h"
#pragma comment(lib, "winmm.lib")

using namespace System;
using namespace std;

int main()
{
    //Reproduciendo la música
    //El SND_ASYNC sirve para que se asíncrono con la ejecución 
    // del codigo siguiente, es decir llame a la funcion
    //La ruta por default es la carpeta "debug" en la carpeta razí del proyecto
    PlaySound(TEXT("music.wav"), NULL, SND_ASYNC);  //| SND_SYNC esta linea sirve para que el programa acabe la canción y vaya a la siguiente linea de código);
    //Llamando al menú
    ventana();
    menuSelector();
    
    return 0;
}
