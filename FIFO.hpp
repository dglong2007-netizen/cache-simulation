# pragma once

#include "ReplacementPolicy.hpp"

class FIFO : public ReplacementPolicy {
    public:

        string selectVictim(const CacheData&entries) const override;
};