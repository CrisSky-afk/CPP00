#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <string>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _next;
        int _count;
        std::string truncate(std::string str);

    public:
        PhoneBook();
        void addContact(const Contact &contact);
        void listContacts();
        Contact getContact(int index);
        int getCount() const;
};

#endif