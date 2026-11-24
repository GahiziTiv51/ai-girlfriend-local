// main.cpp — entry point. Wires config and subsystems together.

#include "aigirlfriendlocal/settings.h"
#include "aigirlfriendlocal/persona.h"
#include "aigirlfriendlocal/memory.h"
#include "aigirlfriendlocal/voice.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    aigirlfriendlocal::Settings settings = aigirlfriendlocal::Settings::load_default();
    aigirlfriendlocal::Persona persona(settings.store_path);
    aigirlfriendlocal::Memory memory(settings.store_path);
    aigirlfriendlocal::Voice voice(settings.store_path);
    std::fprintf(stderr, "[ai-girlfriend-local] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
