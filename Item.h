#ifndef L1_IA2001_ITEM_H
#define L1_IA2001_ITEM_H
#include <string>
using namespace std;

class Item {
public:
    Item(string name, int atk);

    Item();

    const string &getName() const;

    void setName(const string &name);

    int getAtk() const;

    void setAtk(int atk);

private:
    string name;
    int atk;

};


#endif //L1_IA2001_ITEM_H
