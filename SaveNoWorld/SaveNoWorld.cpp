#include "pch.h"
#include "conio.h"
#include "iostream"
#include "Header.h"
#pragma comment(lib, "winmm.lib")

using namespace System;
using namespace std;

int main()
{
    //Reproduciendo la m�sica
    //El SND_ASYNC sirve para que se as�ncrono con la ejecuci�n 
    // del codigo siguiente, es decir llame a la funcion
    //La ruta por default es la carpeta "debug" en la carpeta raz� del proyecto
    PlaySound(TEXT("music.wav"), NULL, SND_ASYNC);  //| SND_SYNC esta linea sirve para que el programa acabe la canci�n y vaya a la siguiente linea de c�digo);
    //Llamando al men�
    ventana();
    menuSelector();
    
    return 0;
}
