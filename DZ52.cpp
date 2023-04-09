#include "Header.h"

namespace engine
{
    class EngineInfo
    {
    private:
        std::string model;
        int displacement;
        float power;
        std::string typeFuel;
        std::string manufacturer;

    public:
        EngineInfo(std::string model, int displacement, float power, std::string typeFuel, std::string manufacturer)
            : model(model), displacement(displacement), power(power), typeFuel(typeFuel), manufacturer(manufacturer)
        {

        }

        std::string getModel() const 
        {
            return this->model; 
        }
        int getDdisplacement() const
        {
            return this->displacement;
        }
        float getPower() const
        { 
            return this->power;
        }
        std::string getTypeFuel() const 
        { 
            return this->typeFuel;
        }
        std::string getManufacturer() const 
        { 
            return this->manufacturer; 
        }
    };

    void printEngineInfo(EngineInfo& engineObj)
    {
        std::cout << "Model: " << engineObj.getModel() << "\n";
        std::cout << "Displacement: " << engineObj.getDdisplacement() << "\n";
        std::cout << "Power: " << engineObj.getPower() << "\n";
        std::cout << "TypeFuel: " << engineObj.getTypeFuel() << "\n";
        std::cout << "Manufacturer: " << engineObj.getManufacturer() << "\n";
    }
};


