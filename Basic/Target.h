#pragma once

#include <string>
// RandomCityasTarget class
class RandomCityasTarget
{
public:
    virtual ~RandomCityasTarget() = default; // virtual destructor

    // Generate a random city name
    virtual std::string GetCityName() = 0;
};
