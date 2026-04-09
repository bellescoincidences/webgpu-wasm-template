#include <emscripten/emscripten.h>

extern "C" {
    // # Reasoning: EMSCRIPTEN_KEEPALIVE prevents the compiler from discarding this function during optimisation.
    EMSCRIPTEN_KEEPALIVE
    float calculate_multiplier(float input_value) {
        return input_value * 2.5f; 
    }
}