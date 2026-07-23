#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _next;
        int _count;

    public:
        PhoneBook();
        void addContact(const Contact &contact);
        void listContacts();
        Contact getContact(int index);
};

#endif