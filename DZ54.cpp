#include "Header.h"


struct Handbook
{
    std::string name;
    std::string owner;
    std::string phoneNumber;
    std::string address;
    std::string occupation;

    std::vector<std::string> notes;

    void addNote(std::string note)
    {
        this->notes.push_back(note);
    }
};

std::ostream& operator<<(std::ostream& stream, Handbook obj)
{
    std::cout << "Name: " << obj.name << "\n";
    std::cout << "Owner: " << obj.owner << "\n";
    std::cout << "Phone number: " << obj.phoneNumber << "\n";
    std::cout << "Address: " << obj.address << "\n";
    std::cout << "Occupation: " << obj.occupation << "\n\n";

    if (obj.notes.size() == 0)
    {
        std::cout << "No notes\n";
    }
    else
    {
        for (auto note : obj.notes)
        {
            std::cout << "[+] " << note << "\n";
        }
    }
    return stream;
}

class Manager
{
    std::vector<Handbook> handbooks;


public:
    Manager() = default;
    Manager(std::initializer_list<Handbook> list)
    {
        for (auto handbook : list)
        {
            this->handbooks.push_back(handbook);
        }
    }

    void addNewHandbook(Handbook handbook)
    {
        this->handbooks.push_back(handbook);
    }

    Handbook* find(std::string field, std::string toFind)
    {
        for (int i = 0; i < this->handbooks.size(); i++)
        {
            if ((field == "name" && handbooks[i].name == toFind) || (field == "owner" && handbooks[i].owner == toFind) ||
                (field == "phoneNumber" && handbooks[i].phoneNumber == toFind) || (field == "address" && handbooks[i].address == toFind) ||
                (field == "occupation" && handbooks[i].occupation == toFind))
            {
                return &handbooks[i];
            }
        }

        throw std::logic_error("Cant find this handbook");
    }

    void save()
    {
        std::ofstream stream;
        stream.open("handbooks.txt");

        for (int i = 0; i < this->handbooks.size(); i++)
        {
            stream << this->handbooks[i].name << "\n";
            stream << this->handbooks[i].owner << "\n";
            stream << this->handbooks[i].phoneNumber << "\n";
            stream << this->handbooks[i].address << "\n";
            stream << this->handbooks[i].occupation << "\n";

            for (int j = 0; j < this->handbooks[i].notes.size(); j++)
            {
                stream << this->handbooks[i].notes[j] << "\n";
            }

            stream << "*\n";
        }

        stream.close();
    }

    void load()
    {
        std::fstream stream;
        stream.open("handbooks.txt");

        std::string buffer;
        Handbook book;

        while (std::getline(stream, book.name))
        {

            std::getline(stream, book.owner);
            std::getline(stream, book.phoneNumber);
            std::getline(stream, book.address);
            std::getline(stream, book.occupation);

            std::string note;
            std::getline(stream, note);

            book.notes.clear();

            while (note[0] != '*')
            {
                book.addNote(note);
                std::getline(stream, note);
            }

            this->handbooks.push_back(book);
        }

        stream.close();
    }

    void clear()
    {
        this->handbooks.clear();
    }
};
