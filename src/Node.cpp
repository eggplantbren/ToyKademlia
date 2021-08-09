#include "Node.h"

namespace ToyKademlia
{

Node::Node(Tools::RNG& rng)
:id(size_bytes)
{
    for(auto& byte: id)
        byte = rng.rand_int(256);
}


} // namespace
