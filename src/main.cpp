#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    fstream archivo;
    archivo.open("./assets/images/canon.txt");
    string canon;
    archivo >> canon;
    archivo.close();

    fstream alien;
    archivo.open("./assets/images/alien.txt");
    archivo >> alien;
    archivo.close();

    int fotograma=0;

    while(true){
        fotograma ++;
        Element tanque = text(canon) 1 bold | color(Color::Green) | bgcolor(Color::Black);
        Element personaje = spinner(21,fotograma) | bold | color(Color::Aquamarine1) | bgcolor(Color::Black)
        Element lienzo = hbox({personaje , tanque});

        Screen pantalla = Screen::Create(
            Dimension::Full(),
            Dimension::Full());

        Render(pantalla,lienzo);
        pantalla.Print();
        cout<<pantalla.ResetPosition();

        this_thread::sleep_for(0.1s);
    }
    return 0;
}
