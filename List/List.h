#include <stdio.h> //Pour avoir NULL
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

#include "Cell.h"
#include "Iterator.h"

/**
 * La classe Liste représente une liste d'éléments doublement chaînée.
 * Les éléments pointés peuvent être des objets de n'importe quelle classe.
 * @author Jasmin Brassard, janvier 2012
 *         Cours 420-220-SF - Cégep de Sainte-Foy
 */
template <class TYPE>
class List
{
public:
    
    //Constructeur
    List();

    //Destructeur
    ~List();
    
	//Insert à la fin de liste (supporte l'ajout dans une liste vide)
	void PushBack(TYPE* _element);
	
    //Insert avant la position courante (limite: impossible d'ajouter à la fin!)
    //Ne supporte pas l'ajout dans une liste vide.
    //2 cas 1)Insertion au début 
    //      2)Insertion entre premier et dernier 
    void Insert(TYPE* _element, Iterator<TYPE>& _iter);

    //Enlève de la liste le pointeur de l'élément 
    //4 cas...
    void Erase(Iterator<TYPE>& _iter);

    //Retourne l'élément par valeur (copie)
    TYPE* GetElement(const Iterator<TYPE>& _iter) const;

    int GetNbElements() const;

    bool IsEmpty() const;

    void Clear();


    //3 Méthodes déjà implémentées:
    Cell<TYPE>* Begin() const;

    Cell<TYPE>* End() const;

    template <class TYPE>
    friend ostream& operator<<(ostream& _Sortie, const List<TYPE>& _List);

private:

    List(const List&); //copieur désativé
    const List& operator=(const List<TYPE>&); //affectateur désactivé
    
    //Attributs
    int nbElements;
    Cell<TYPE>* first;
    Cell<TYPE>* last; 

};

#include "list.hpp"