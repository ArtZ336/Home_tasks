class CPU
{
    std::string model;
    int core;
    float GHz;
public:
    CPU(std::string model, int core, float GHz)
    {
        this->model = model;
        this->core = core;
        this->GHz = GHz;
    }
    void Show()
    {
        std::cout << "Model: " << model << "\n";
        std::cout << "Core: " << core << "\n";
        std::cout << "Frequency: " << GHz << "\n";
    }
};

class RAM
{
    std::string model;
    int storage;
public:
    RAM(std::string model, int storage)
    {
        this->model = model;
        this->storage = storage;
    }
    void Show()
    {
        std::cout << "Model: " << model << "\n";
        std::cout << "Storage: " << storage << "\n";
    }
};
class GPU
{
    std::string model;
    int memory;
public:
    GPU(std::string model, int memory)
    {
        this->model = model;
        this->memory = memory;
    }
    void Show()
    {
        std::cout << "Model: " << model << "\n";
        std::cout << "Memory: " << memory << "\n";
    }
};
class GPU
{
    std::string model;
    int memory;
public:
    GPU(std::string model, int memory)
    {
        this->model = model;
        this->memory = memory;
    }
    void Show()
    {
        std::cout << "Model: " << model << "\n";
        std::cout << "Memory: " << memory << "\n";
    }
};
class Mouse
{
    std::string model;
    bool isWire;
public:
    Mouse(std::string model, bool isWire)
    {
        this->model = model;
        this->isWire = isWire;
    }
    void Show()
    {
        std::cout << "Model: " << model << "\n";
        std::cout << "Wire: " << isWire << "\n";
    }
};
class PowerSupply
{
    std::string model;
    int Power;
public:
    PowerSupply(std::string model, int Power)
    {
        this->model = model;
        this->Power = Power;
    }
    void Show()
    {
        std::cout << "Model: " << model << "\n";
        std::cout << "Power: " << Power << "\n";
    }
};
class PC
{
    std::string model;
    CPU* cpu;
    GPU* gpu;
    RAM* ram;
    Mouse* mouse;
    PowerSupply* powersupply;
public:
    PC(std::string model, CPU* cpu, GPU* gpu, RAM* ram, Mouse* mouse, PowerSupply* powersupply)
    {
        this->model = model;
        this->mouse = mouse;
        this->cpu = cpu;
        this->gpu = gpu;
        this->ram = ram;
        this->powersupply = powersupply;
    }
    void showPC() const {
        std::cout << "Model: " << this->model << "\n";
        this->mouse->Show();
        this->cpu->Show();
        this->gpu->Show();
        this->ram->Show();
        this->powersupply->Show();
    }
    ~PC()
    {
        delete this->cpu;
        delete this->gpu;
        delete this->mouse;
        delete this->ram;
        delete this->powersupply;
    }
};
