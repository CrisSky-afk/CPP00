#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:
        void setFirstName(const std::string &name);
        void setLastName(const std::string &name);
        void setNickName(const std::string &name);
        void setPhoneNumber(const std::string &number);
        void setDarkestSecret(const std::string &secret);

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

        void display() const;
};

#endif