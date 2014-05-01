
//Constructeur
template <class TYPE>
List<TYPE>::List()
{
	nbElements = 0;
}

//Destructeur
template <class TYPE>
List<TYPE>::~List()
{
}

//Insert à la fin de liste (supporte l'ajout dans une liste vide)
template <class TYPE>
void List<TYPE>::PushBack(TYPE* _element)
{
	if (IsEmpty())
	{
		first = _element;
		last = _element;
	}
	else
	{
		last->Next = _element;
		last = new Cell<TYPE>(_element, last, NULL);
	}
}
template <class TYPE>
void List<TYPE>::Insert(TYPE* _Element, Iterator<TYPE>& _Iter)
{
    //Insert avant la position courante (limite: impossible d'ajouter à la fin!)
    //Ne supporte pas l'ajout dans une liste vide.
    //2 cas 1)Insertion au début 
    //      2)Insertion entre premier et dernier 
	if (this->IsEmpty() = false)
	{
		if (_Iter->current = this->Begin())
		{
			Cell<TYPE>* newCell = new Cell<TYPE>(_Element, NULL, _Iter->current);
			this->first->Previous = newCell;
			this->first = newCell;
		}
		else
		{
			Cell<TYPE>* nextCell = _Iter->current;
			Cell<TYPE>* previousCell;
			
			nextCell = nextCell->Next;
			previousCell = previousCell->Previous;

			Cell<TYPE>* newCell = new Cell<TYPE>(_Element, previousCell, nextCell);

			nextCell->Previous = newCell;
			previousCell->Next = newCell;
		}
	}
}

template <class TYPE>
void List<TYPE>::Erase(Iterator<TYPE>& _Iter)
{
	if (_Iter->GetCurrent() == Begin() && _Iter->GetCurrent() == End())
	{
		del first;
		del end;
	}
	if (_Iter->GetCurrent() == Begin())
	{
		Cell<TYPE>* temp = Begin()->Next;
		del first;
		first = temp;
		temp->Previous = NULL;
	}
	else if (_Iter->GetCurrent() == End())
	{
		Cell<TYPE>* temp = End()->Next;
		del first;
		first = temp;
		temp->Previous = NULL;
	}
	else
	{
		Cell<TYPE>* prev = _Iter->GetCurrentElement()->Previous;
		Cell<TYPE>* next = _Iter->GetCurrentElement()->Next;

		prev->Next = next;
		next->Previous = prev;

		del _Iter->GetCurrentElement();
	}
    //4 cas possibles... A vous de les trouver!
}

template <class TYPE>
TYPE* List<TYPE>::GetElement(const Iterator<TYPE>& _Iter) const
{
	return _Iter->GetCurrentElement();
}

template <class TYPE>
int List<TYPE>::GetNbElements() const
{ 
	int count = 0;
	Cell<TYPE>* current = Begin();
	while (current != End())
	{
		current = current->Next;
		count++;
	}

	return count;
}

template <class TYPE>
bool List<TYPE>::IsEmpty() const
{
	return (this->first == NULL);
} 

template <class TYPE>
void List<TYPE>::Clear()
{

}

//Méthodes déjà implémentées
template <class TYPE>
Cell<TYPE>* List<TYPE>::Begin() const
{ 
    return this->first;
}

template <class TYPE>
Cell<TYPE>* List<TYPE>::End() const
{
    return this->last;
}

template <class TYPE>
ostream& operator<<(ostream& _sortie, const List<TYPE>& _list)
{
    Cell<TYPE>* cellule=_list.first;

    while(cellule != NULL){
        _sortie<<*cellule->Element<<endl;
        cellule = cellule->Next;
    }
    _sortie<<endl;
    return _sortie;
}