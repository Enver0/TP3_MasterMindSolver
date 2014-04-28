#include <stdio.h> //Pour avoir NULL
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

#include "Cell.h"
#include "Iterator.h"

/**
 * La classe Liste repr�sente une liste d'�l�ments doublement cha�n�e.
 * Les �l�ments point�s peuvent �tre des objets de n'importe quelle classe.
 * @author Jasmin Brassard, janvier 2012
 *         Cours 420-220-SF - C�gep de Sainte-Foy
 */
template <class TYPE>
class List
{
public:
    
    //Constructeur
    List();

    //Destructeur
    ~List();
    
	//Insert � la fin de liste (supporte l'ajout dans une liste vide)
	void PushBack(TYPE* _element);
	
    //Insert avant la position courante (limite: impossible d'ajouter � la fin!)
    //Ne supporte pas l'ajout dans une liste vide.
    //2 cas 1)Insertion au d�but 
    //      2)Insertion entre premier et dernier 
    void Insert(TYPE* _element, Iterator<TYPE>& _iter);

    //Enl�ve de la liste le pointeur de l'�l�ment 
    //4 cas...
    void Erase(Iterator<TYPE>& _iter);

    //Retourne l'�l�ment par valeur (copie)
    TYPE* GetElement(const Iterator<TYPE>& _iter) const;

    int GetNbElements() const;

    bool IsEmpty() const;

    void Clear();


    //3 M�thodes d�j� impl�ment�es:
    Cell<TYPE>* Begin() const;

    Cell<TYPE>* End() const;

    template <class TYPE>
    friend ostream& operator<<(ostream& _Sortie, const List<TYPE>& _List);

private:

    List(const List&); //copieur d�sativ�
    const List& operator=(const List<TYPE>&); //affectateur d�sactiv�
    
    //Attributs
    int nbElements;
    Cell<TYPE>* first;
    Cell<TYPE>* last; 

};

#include "list.hpp"