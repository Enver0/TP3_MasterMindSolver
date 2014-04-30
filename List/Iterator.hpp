
template <class TYPE>
Iterator<TYPE>::Iterator(void)
{

}

template <class TYPE>
void Iterator<TYPE>::Next(void)
{
	this->current = current->Next;
}

template <class TYPE>
void Iterator<TYPE>::Previous(void)
{
	this->current = Cell<TYPE>::Previous;
}

template <class TYPE>
TYPE* Iterator<TYPE>::GetCurrentElement(void) const
{
	return current->Element;
}

template <class TYPE>
Cell<TYPE>* Iterator<TYPE>::GetCurrent(void) const
{
	return current;
}

template <class TYPE>
void Iterator<TYPE>::SetCurrent(Cell<TYPE>* _cell)
{
	this->current = _cell;
}
