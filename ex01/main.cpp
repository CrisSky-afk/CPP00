#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string getInput(const std::string &prompt)
{
    std::string input;

    while (true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
            std::exit(0);
        if (input.empty())
        {
            std::cout << "Field cannot be empty." << std::endl;
            continue;
        }
        return input;
    }
}

bool validInput(const std::string &str)
{
    for (int i = 0; i < static_cast<int>(str.size()); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command: ";
        if (!std::getline(std::cin, command))
            std::exit(0);
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            Contact contact;
            contact.setFirstName(getInput("Enter your first name: "));
            contact.setLastName(getInput("Enter your last name: "));
            contact.setNickName(getInput("Enter your nick name: "));
            contact.setPhoneNumber(getInput("Enter your phone number: "));
            contact.setDarkestSecret(getInput("Enter your darkest secret: "));
            phoneBook.addContact(contact);
        }
        else if (command == "SEARCH")
        {
            if (phoneBook.getCount() == 0)
            {
                std::cout << "PhoneBook is empty." << std::endl;
                continue;
            }
            phoneBook.listContacts();
            std::string input = getInput("Enter index:");

            if (!validInput(input))
                std::cout << "Invalid index, please try again." << std::endl;
            else
            {
                int index = std::atoi(input.c_str());
                if (index < 0 || index >= phoneBook.getCount())
                {
                    std::cout << "Invalid index, please try again." << std::endl;
                    continue;
                }
                Contact contact = phoneBook.getContact(index);
                contact.display();
            }
        }
    }
    return 0;
}