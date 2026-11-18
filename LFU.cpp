
#include "LFU.hpp"

string LFU::selectVictim(
    const CacheData& entries
) const {

    // Neu Cache rong
    if (entries.empty()) {
        return "";
    }

    string victimKey = "";

    int minFrequency = 0;
    int minAccess = 0;

    for (const auto& item : entries) {

        int frequency = item.second.getFrequency();

        int access = item.second.getLastAccessOrder();

        if (victimKey == "" || frequency < minFrequency) {

            victimKey = item.first;

            minFrequency = frequency;

            minAccess = access;
        }

        else if (frequency == minFrequency &&
                 access < minAccess) {

            victimKey = item.first;

            minAccess = access;
        }
    }

    return victimKey;
}
