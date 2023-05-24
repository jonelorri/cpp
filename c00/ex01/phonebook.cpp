#include <iostream>

using std::cout;
using std::string;
using std::endl;
using std::cin;

int contador = 0;

class Contact
{
    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;
    public:
        void set_params(string, string, string, string, string);
        string get_params(string);
};

void Contact::set_params(string _first_name, string _last_name, string _nickname, string _phone_number, string _darkest_secret)
{
    first_name = _first_name;
    last_name = _last_name;
    nickname = _nickname;
    phone_number = _phone_number;
    darkest_secret = _darkest_secret;
}

string Contact::get_params(string data)
{
    if (data == "first_name")
        return(first_name);
    if (data == "last_name")
        return(last_name);
    if (data == "nickname")
        return(nickname);
    if (data == "phone_number")
        return(phone_number);
    if (data == "darkest_secret")
        return(darkest_secret);
    return("null");
}

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        void addContact(Contact);
        void get_full_contact(int);
        void display_book();
};

void PhoneBook::addContact(Contact contact)
{
    int i = 0;
    while(i < 8)
    {
        if (contacts[i].get_params("first_name").empty())
            break;
        i++;
    }
    if (i == 8)
    {
        i = contador;
        contador++;
        if (contador == 8)
            contador = 0;
    }
    contacts[i].set_params(contact.get_params("first_name"), contact.get_params("last_name"), contact.get_params("nickname"), contact.get_params("phone_number"), contact.get_params("darkest_secret"));
}

void PhoneBook::get_full_contact(int index)
{
    if (contacts[index].get_params("first_name").empty())
    {
        cout<<"Error: Empty"<<endl;
        return ;
    }
    cout<<contacts[index].get_params("first_name")<<endl;
    cout<<contacts[index].get_params("last_name")<<endl;
    cout<<contacts[index].get_params("nickname")<<endl;
    cout<<contacts[index].get_params("phone_number")<<endl;
    cout<<contacts[index].get_params("darkest_secret")<<endl;
}

void PhoneBook::display_book()
{
    int i = 0;
    string f_name;
    string l_name;
    string n_name;
    int len;
    int n_spaces;

    while(i < 8)
    {
        if (contacts[i].get_params("first_name").empty())
            break;
        else
        {
            f_name = contacts[i].get_params("first_name");
            len = f_name.length();
            if (len < 10)
            {
                n_spaces = 10 - len;
                while (n_spaces > 0)
                {
                    f_name = " " + f_name;
                    n_spaces--;
                }
            }
            else
            {
                f_name[9] = '.';
                f_name.erase(10);
            }

            l_name = contacts[i].get_params("last_name");
            len = l_name.length();
            if (len < 10)
            {
                n_spaces = 10 - len;
                while (n_spaces > 0)
                {
                    l_name = " " + l_name;
                    n_spaces--;
                }
            }
            else
            {
                l_name[9] = '.';
                l_name.erase(10);
            }

            n_name = contacts[i].get_params("nickname");
            len = n_name.length();
            if (len < 10)
            {
                n_spaces = 10 - len;
                while (n_spaces > 0)
                {
                    n_name = " " + n_name;
                    n_spaces--;
                }
            }
            else
            {
                n_name[9] = '.';
                n_name.erase(10);
            }

            cout<<"+----------+----------+----------+----------+"<<endl;
            cout<<"|         "<<i<<"|"<<f_name<<"|"<<l_name<<"|"<<n_name<<"|"<<endl;
            cout<<"+----------+----------+----------+----------+"<<endl;
        }
        i++;
    }
}

int main()
{
    PhoneBook phoneBook;
    Contact contact;
    string command;
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string darkest_secret;
    string index;

    while (1)
    {
        cout<<"Insert any of the following commands: ADD, SEARCH, EXIT: ";
        getline(cin, command);
        if (command == "ADD")
        {
            cout<<"Insert first name: ";
            getline(cin, first_name);
            cout<<"Insert last name: ";
            getline(cin, last_name);
            cout<<"Insert nickname: ";
            getline(cin, nickname);
            cout<<"Insert phone number: ";
            getline(cin, phone_number);
            cout<<"Insert darkest secret: ";
            getline(cin, darkest_secret);
            if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
                cout<<"Error: values cannot be empty"<<endl;
            else
            {
                contact.set_params(first_name, last_name, nickname, phone_number, darkest_secret);
                phoneBook.addContact(contact);
            }
        }
        else if (command == "SEARCH")
        {
            phoneBook.display_book();
            cout<<"Select index: ";
            getline(cin, index);
            if (index != "0" && index != "1" && index != "2" && index != "3" && index != "4" && index != "5" && index != "6" && index != "7")
            {
                cout<<"Error: wrong index"<<endl;
            }
            else
            {
                phoneBook.get_full_contact(stoi(index));
            }
        }
        else if (command == "EXIT")
        {
            break;
        }
    }
    return 0;
}