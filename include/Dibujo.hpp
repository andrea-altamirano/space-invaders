#include<fstream>
using namespace std;

class {
private:
    fstream archivo;
    Element contenido;
public:
    Dibujo(string path)
    {
        archivo.open(path);
        Elements lineas;
        while( !archivo.eof())
        {
            string linea;
            getline(arvhivo, linea);
            lineas.emplace_back(text(linea));
        }
        this->contenido = vbox(lineas);
        archivo.close
    }
    Element GetElement(){
        return
    }
};


::
(/* args */)
{
}


::~
()
{
}
