#ifndef ToyKademlia_Node_h
#define ToyKademlia_Node_h

#include <Tools/RNG.hpp>
#include <vector>

namespace ToyKademlia
{

// Size of hashes in bits and in bytes
static constexpr int size_bits = 384;
static constexpr int size_bytes = size_bits / 8;

class Node
{
    private:
        std::vector<unsigned char> id;

    public:

        // No default constructor
        Node() = delete;

        // Create with a new random ID 
        Node(Tools::RNG& rng);

};

} // namespace

#endif
