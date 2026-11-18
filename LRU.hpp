
#pragma once

#include "ReplacementPolicy.hpp"

class LRU : public ReplacementPolicy {
public:

    string selectVictim(
        const CacheData& entries
    ) const override;
};
