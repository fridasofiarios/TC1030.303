#include <iostream>
using namespace std;
//Polimorfismo
class FigurasGeometricas
{   
    protected:
    int _ancho,_alto;
    public:
    FigurasGeometricas(int ancho, int alto)
    {
        _ancho=ancho;
        _alto=alto;
    }
    virtual void sacarArea() = 0;
};

class Cuadrado : public FigurasGeometricas
{   
    public:
    Cuadrado(int ancho, int alto) : FigurasGeometricas(ancho, alto)
    {
        cout << "Cuadrado del cuadrado" << endl;
    }
    void sacarArea()
    {
        cout << "el area del cuadrado es: " << _ancho*_alto << endl;
    }
};

class Triangulo : public FigurasGeometricas
{   
    public:
    Triangulo(int ancho, int alto) : FigurasGeometricas(ancho, alto)
    {
        cout << "Cuadrado del triangulo" << endl;
    }
    void sacarArea()
    {
        cout << "el area del triangulo es: " << _ancho*_alto/2 << endl;
    }
};

void calcularAreaFiguras(FigurasGeometricas *ap)
{
    ap->sacarArea();
};

int main()
{
    //FigurasGeometricas fg(5,4);
    //fg.sacarArea();
    
    Cuadrado c(7,3);
    //c.sacarArea();

    Triangulo T(7,3);
    T.sacarArea();

    FigurasGeometricas * ap=NULL;

    ap=&c;
    calcularAreaFiguras(ap);
    ap= &T;
    calcularAreaFiguras(ap);
    //ap=&T;
    //ap->sacarArea();
    return 0;

}