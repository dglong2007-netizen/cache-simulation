
#include "LRU.hpp"

string LRU::selectVictim(
    const CacheData& entries
) const {

    // Neu Cache rong
    if (entries.empty()) {
        return "";
    }

    string victimKey = "";
    int minAccess = 0;

    for (const auto& item : entries) {

        int access = item.second.getLastAccessOrder();

        if (victimKey == "" || access < minAccess) {

            minAccess = access;
            victimKey = item.first;
        }
    }

    return victimKey;
}
