template <class TYPE>
Cell<TYPE>::Cell(TYPE* _element, Cell* _previous, Cell* _next)
{
    this->Element = _element;
    this->Previous= _previous;
    this->Next = _next;
}