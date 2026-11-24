// voice.cpp — part of ai-girlfriend-local.

#include "aigirlfriendlocal/voice.h"

#include <cstdio>

namespace aigirlfriendlocal {

Voice::Voice(const std::string& config_path)
    : config_path_(config_path) {}

void Voice::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Voice::run() {
    if (verbose_) std::fprintf(stderr, "[ai-girlfriend-local] voice: run\n");
    // core logic lives here
    return true;
}

}  // namespace aigirlfriendlocal
