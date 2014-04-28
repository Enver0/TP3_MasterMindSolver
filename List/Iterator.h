#include "Cell.h"

template <class TYPE>
class Iterator{
private:
    Cell<TYPE>* current;
public:
    //Constructeur
    Iterator(void);

    //M�thodes

    //Fait pointer l'it�rateur sur la prochaine Cellule de la liste
    void Next(void);

    //Fait pointer l'it�rateur sur la  Cellule pr�c�dente de la liste
    void Previous(void);

    //Retourne l'�l�ment sur lequel l'it�rateur pointe
    TYPE* GetCurrentElement(void) const;

    //Retourne le pointeur sur la Cellule sur laquelle l'it�rateur pointe
    Cell<TYPE>* GetCurrent(void) const;

    //Modifie le pointeur sur la Cellule sur laquelle l'it�rateur pointe
    void SetCurrent(Cell<TYPE>* _cell);
    
};
#include "iterator.hpp"