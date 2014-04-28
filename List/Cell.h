#pragma once
template <class TYPE>
class Cell
{
public:
    TYPE* Element;

    Cell* Previous;
    Cell* Next;

    //La cellule contient un pointeur sur un élément car c'est uniquement en recevant un pointeur que l'on peut passer
    //à la fois un tableau (toujours passé par référence) et un objet.
    //C'est une bonne habitude de coder la cellule avec un pointeur TYPE car la cellule peut recevoir n'importe quel type de données.

    //Constructeur de cellule, prend un pointeur sur l'élément (ne pas prendre une copie de l'élément car on ne veut pas forcer le TYPE à avoir un copieur)
    Cell(TYPE* _element, Cell* _previous, Cell* _next);
    ~Cell(){}
};

#include "cell.hpp"


