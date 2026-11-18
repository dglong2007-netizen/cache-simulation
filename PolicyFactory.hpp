
#pragma once

#include <memory>
#include "ReplacementPolicy.hpp"

class PolicyFactory {
public:
    static unique_ptr<ReplacementPolicy> createPolicy(int choice);
};
