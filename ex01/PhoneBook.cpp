#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _next(0), _count(0)
{

}

void PhoneBook::addContact(const Contact &contact)
{
    _contacts[_next] = contact;
    _next++;
    if (_next == 8)
        _next = 0;
    if (_count != 8)
        _count++; 
}