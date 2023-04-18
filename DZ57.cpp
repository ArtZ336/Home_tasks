
class Dictianory
{
    std::map<std::string, std::string> dict;
public:
    Dictianory() = default;

    std::string Search(std::string word)
    {
        for (auto it : this->dict)
        {
            if (it.first == word)
            {
                return it.second;
            }
        }
    }

    void Add(std::string word, std::string description)
    {
        this->dict[word] = description;
    }

    void Delete(std::string word)
    {
        auto it = this->dict.find(word);
        this->dict.erase(it);
    }
    void Save()
    {
        std::ofstream stream;
        stream.open("dict.txt");

        for (auto it : this->dict)
        {
            stream << it.first << "\n";
            stream << it.second << "\n";
        }

        stream.close();
    }

    void Read()
    {
        std::ifstream stream;
        stream.open("dict.txt");

        while (!stream.eof())
        {
            std::string word;
            std::string description;

            std::getline(stream, word);
            std::getline(stream, description);

            this->dict[word] = description;
        }

        stream.close();
    }
};
