#pragma once

#include <string>
#include <unordered_map>

#include "CacheEntry.hpp"

using namespace std;

using CacheData = unordered_map<string, CacheEntry>;

class ReplacementPolicy {
public:

    virtual string selecVictim(const CacheData& entries) const = 0;

    virtual ~ReplacementPolicy(){
        
    }
};