#include "Cell.h"

template <class TYPE>
class Iterator{
private:
    Cell<TYPE>* current;
public:
    //Constructeur
    Iterator(void);

    //Méthodes

    //Fait pointer l'itérateur sur la prochaine Cellule de la liste
    void Next(void);

    //Fait pointer l'itérateur sur la  Cellule précédente de la liste
    void Previous(void);

    //Retourne l'élément sur lequel l'itérateur pointe
    TYPE* GetCurrentElement(void) const;

    //Retourne le pointeur sur la Cellule sur laquelle l'itérateur pointe
    Cell<TYPE>* GetCurrent(void) const;

    //Modifie le pointeur sur la Cellule sur laquelle l'itérateur pointe
    void SetCurrent(Cell<TYPE>* _cell);
    
};
#include "iterator.hpp"