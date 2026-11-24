// persona.cpp — part of ai-girlfriend-local.

#include "aigirlfriendlocal/persona.h"

#include <cstdio>

namespace aigirlfriendlocal {

Persona::Persona(const std::string& config_path)
    : config_path_(config_path) {}

void Persona::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Persona::run() {
    if (verbose_) std::fprintf(stderr, "[ai-girlfriend-local] persona: run\n");
    // core logic lives here
    return true;
}

}  // namespace aigirlfriendlocal
