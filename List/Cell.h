#pragma once
template <class TYPE>
class Cell
{
public:
    TYPE* Element;

    Cell* Previous;
    Cell* Next;

    //La cellule contient un pointeur sur un �l�ment car c'est uniquement en recevant un pointeur que l'on peut passer
    //� la fois un tableau (toujours pass� par r�f�rence) et un objet.
    //C'est une bonne habitude de coder la cellule avec un pointeur TYPE car la cellule peut recevoir n'importe quel type de donn�es.

    //Constructeur de cellule, prend un pointeur sur l'�l�ment (ne pas prendre une copie de l'�l�ment car on ne veut pas forcer le TYPE � avoir un copieur)
    Cell(TYPE* _element, Cell* _previous, Cell* _next);
    ~Cell(){}
};

#include "cell.hpp"


