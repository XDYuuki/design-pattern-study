#include <iostream>
#include <string.h>
#include "PersonPrototype.h"

std::string PersonPrototype::GetName()
{
    return this->name_;
}

int PersonPrototype::GetAge()
{
    return this->age_;
}

void PersonPrototype::SetName(std::string name)
{
    this->name_ = name;
}

void PersonPrototype::SetAge(int age)
{
    this->age_ = age;
}

EFavoriteColor PersonPrototype::GetFavoriteColor()
{
    return this->FavoriteColor_;
}
void PersonPrototype::SetFavoriteColor(EFavoriteColor FavColor)
{
    this->FavoriteColor_ = FavColor;
}