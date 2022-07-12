#ifndef PROTOTYPE_INTERFACE
#define PROTOTYPE_INTERFACE

#include <iostream>
#include <string.h>

enum EFavoriteColor
{
    RED,
    GREEN,
    BLUE,
    PURPLE,
    YELLOW,
    BLACK,
    WHITE,
    BLANK
};

class PersonPrototype
{
private:
    std::string name_;
    int age_;
    EFavoriteColor FavoriteColor_;
public:
    PersonPrototype(std::string name, int age, EFavoriteColor favoriteColor):name_(name),age_(age),FavoriteColor_(favoriteColor){}
    virtual PersonPrototype *Clone() const = 0;
    std::string GetName();
    int GetAge();
    void SetName(std::string name);
    void SetAge(int age);
    EFavoriteColor GetFavoriteColor();
    void SetFavoriteColor(EFavoriteColor FavColor);
};

#endif