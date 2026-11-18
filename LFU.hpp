
#pragma once

#include "ReplacementPolicy.hpp"

class LFU : public ReplacementPolicy {
public:

    string selectVictim(
        const CacheData& entries
    ) const override;
};
