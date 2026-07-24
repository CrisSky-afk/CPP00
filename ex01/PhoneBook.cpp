#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _next(0), _count(0)
{

}

int PhoneBook::getCount() const
{
    return _count;
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

Contact PhoneBook::getContact(int index)
{
    return _contacts[index];
}

std::string PhoneBook::truncate(std::string str)
{
    if (str.size() <= 10)
        return str;
    else
        return str.substr(0, 9) + ".";
}

void PhoneBook::listContacts()
{
    for (int i = 0; i < _count; i++)
    {
        std::cout << std::setw(10) << std::right << i << "|"
                    << std::setw(10) << std::right << truncate(_contacts[i].getFirstName()) << "|"
                    << std::setw(10) << std::right << truncate(_contacts[i].getLastName()) << "|"
                    << std::setw(10) << std::right << truncate(_contacts[i].getNickName())
                    << std::endl;
    }
}