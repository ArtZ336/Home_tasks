struct Train
{
    std::string number;
    std::string time;
    std::string destination;
};

class ManagerTrain
{
    std::vector<Train> trains;

    void TrainOut(Train obj)
    {
        std::cout << "Number: " << obj.number << "\n";
        std::cout << "Time: " << obj.time << "\n";
        std::cout << "Destination: " << obj.destination << "\n";
    }

public:
    ManagerTrain();

    void Add(Train obj) 
    { 
        this->trains.push_back(obj); 
    }

    void print()
    {
        for (auto train : this->trains)
        {
            this->TrainOut(train);
        }
    }

    void print(std::string number)
    {
        for (auto train : this->trains)
        {
            if (train.number == number)
            {
                this->TrainOut(train);
            }
        }
    }
};
