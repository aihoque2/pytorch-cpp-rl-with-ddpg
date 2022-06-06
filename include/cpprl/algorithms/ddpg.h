#pragma once

#include <string>
#include <vector>

#include <torch/torch.h>

#include "cpprl/algorithms/algorithm.h"

namespace cpprl
{
    class Policy;
    class RolloutStorage;
    
    class DDPG: public Algorithm
    {
        private: 
        Policy &policy;

        public:
            DDPG(Policy &policy);
    };
}