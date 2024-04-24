#include <iostream>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int arg, char const *argv[])
{
    auto Pantalla = Screen::Create(Dimension::Fixed(10), Dimension::Fixed(10));
    Render(Pantalla, border(text("Hola")));
    Pantalla.PixelAt(5, 5).character = "m";

    string prueba = "Otro";
    int posicionX = 5;
    int posicionY = 4;
    for (auto &&letra : prueba)
    {
        Pantalla.PixelAt(posicionX, posicionY).character = letra;
        posicionX++;
    }
    Pantalla.Print();

    return 0;
}