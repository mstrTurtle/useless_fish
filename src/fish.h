#ifndef FISH_H
#define FISH_H

namespace turtle{
namespace animal{

class Fish{
    public:
    Fish() = default;
    int flow();
    int dive();
    int give_name(char* _name);
    int get_name(char*& _name);
    private:
    enum status{
        SUCCESS = 0,
        FAILED = 1
    };
    char* name;
};

}
}

#endif