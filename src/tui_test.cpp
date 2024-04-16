#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>

using namespace ftxui;

int main() {

    //Crea los elementos de la interfaz del usuario
    Element label = text("hola mundo");
    Element container  = hbox({label});

    //Crea la pantalla y establece el contenido
    auto screen = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(container)
    );
    Render(screen,container);
    screen.Print();

    return 0;

}