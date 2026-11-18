
#include "PolicyFactory.hpp"

#include "FIFO.hpp"
#include "LRU.hpp"
#include "LFU.hpp"

#include <stdexcept>

unique_ptr<ReplacementPolicy> PolicyFactory::createPolicy(int choice) {

    switch (choice) {

        case 1:
            return make_unique<FIFO>();

        case 2:
            return make_unique<LRU>();

        case 3:
            return make_unique<LFU>();

        default:
            throw invalid_argument("Invalid policy choice");
    }
}
