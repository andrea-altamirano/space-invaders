#include <iostream>
#include <string>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int arg, char const *argv[])
{
    string palabra = "DVD";
    string palabra1 = "bbbbbbbbbb";
    int posicionInicialX = 5;
    int posicionInicialY = 0;

    int posicionInicial2X = 6;
    int posicionInicial2Y = 1;

    auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

    while(true){
        this_thread::sleep_for(0.5s);
        Pantalla.Clear();

        int posicionPalabraX = 0;
        int posicionPalabraY = 0;

        int posicionPalabra1X = 1;
        int posicionPalabra1Y = 1;
        for (auto &&letra : palabra)
        {
            int posicionFinalX= posicionInicialX + posicionPalabraX;
            int posicionFinalY= posicionInicialY + posicionPalabraY;

            Pantalla.PixelAt(posicionFinalX, posicionFinalY).character = letra;
            posicionPalabraX++;

        }
                for (auto &&letra : palabra1)
        {
            int posicionFinal2X= posicionInicial2X + posicionPalabra1X;
            int posicionFinal2Y= posicionInicial2Y + posicionPalabra1Y;

            Pantalla.PixelAt(posicionFinal2X, posicionFinal2Y).character = letra;
            posicionPalabra1X++;
        }
        Pantalla.Print();
        Pantalla.Clear();
        cout<<Pantalla.ResetPosition();

        posicionInicialX++;
        posicionInicialY++;

        posicionInicial2X++;
        posicionInicial2Y++;
    }

    return 0;
}