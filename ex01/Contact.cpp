#include "Contact.hpp"
#include <iostream>

void Contact::setFirstName(const std::string &name)
{
    _firstName = name;
}
void Contact::setLastName(const std::string &name)
{
    _lastName = name;
}

void Contact::setNickName(const std::string &name)
{
    _nickName = name;
}

void Contact::setPhoneNumber(const std::string &number)
{
    _phoneNumber = number;
}

void Contact::setDarkestSecret(const std::string &secret)
{
    _darkestSecret = secret;
}

std::string Contact::getFirstName() const
{
    return _firstName;
}

std::string Contact::getLastName() const
{
    return _lastName;
}

std::string Contact::getNickName() const
{
    return _nickName;
}

std::string Contact::getPhoneNumber() const
{
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return _darkestSecret;
}

void Contact::display()const 
{
    std::cout << "First name: " << _firstName << std::endl;
    std::cout << "Last name: " << _lastName << std::endl;
    std::cout << "Nick name: " << _nickName << std::endl;
    std::cout << "Phone number: " << _phoneNumber << std::endl;
    std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}