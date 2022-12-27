#include <iostream>
#include <set>
#include <map>
#include <vector>

int main() {
        /// std::set ==> methods insert(x), find(x), contains(val), 
        /// lower_bound(key), upper_bound(key)
        /**
         * Difference between std::map and std::set
        Very little internally. They are both red-black trees.
        map though contains a pair as its value type. 
        The tree operations then operate on only the first element in that pair. 
        Map then adds additional functionality to search based on this first element and retrieve just the second.
        Use map when you need key->value pairs. Use set when you need to track unique values as a whole.
        */
}