//intefejs
class Object
{
    public: 
        virtual void sell() = 0;
        virtual void exhibit() = 0;
};

//klasy abstrakcyjne
class Furniture : Object
{
    public:
        virtual void clean()
        {

        };
        void sell(){}
        void exhibit(){}
};

class Equipment : Object
{
    public: 
        virtual void test()
        {

        };
        void sell(){}
        void exhibit(){}
};

//zwyczajne klasy
class Chair : Furniture
{
    private:
        char *name;
        char *making;
        double price;
    public:
        Chair(char *name, char *making, double price){};
};

class TV : Equipment
{
    private:
        char *name;
        char *trademark;
        float price;
    public:
        TV(char *name, char *trademark, double price){};
        void turn_on();
        void turn_off();
};


int main(int argc, char const *argv[])
{
    Chair chair1 = Chair("GardenChair","wooden",45.99);
    TV tv1 = TV("HDPP","Philips", 2500.99);
}