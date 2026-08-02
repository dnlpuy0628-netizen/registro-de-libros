#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

class libro{

    private:
    string titulo;
    string autor;
    int publicacion;
    string edicion;
    int paginas;

    public:
    libro(string t = "", string a = "", int pub = 0, string e = "", int pag = 0){
        titulo=t;
        autor= a;
        publicacion= pub;
        edicion= e;
        paginas= pag;
    }

    void presentacion()const{
        cout << "TITULO: " <<titulo <<endl;
        cout << "AUTOR: " <<autor <<endl;
        cout << "PUBLICADO EN: " <<publicacion <<endl;
        cout << "EDICION: " <<edicion <<endl;
        cout << "CANTIDAD DE PAGINAS: " <<paginas <<endl;
    }

};
int main(){
    const int n_libros = 5;
    vector<libro> libros;

    cout<< "INFORMACION DE LOS  LIBROS" << endl;
    cout << endl;
    for (int i = 0; i < n_libros; i++)
    {
        string titulo, autor, edicion;
        int publicacion, paginas;

        cout << "INGRESE LOS DATOS DEL LIBRO " << (i+1) << endl;

        cout << "TITULO: ";
        getline(cin >> ws, titulo);

        cout << "AUTOR: ";
        getline(cin,autor);
        
        cout << "PUBLICADO EN: ";
        cin >> publicacion;
        cin.ignore();

        cout << "EDICION: ";
        getline(cin,edicion);

        cout << "CANTIDAD DE PAGINAS: ";
        cin>> paginas;
        cin.ignore();
        cout << endl;

        libro NuevoLibro(titulo, autor, publicacion, edicion, paginas);
        libros.push_back(NuevoLibro);
        cout << endl;

    }
    
}