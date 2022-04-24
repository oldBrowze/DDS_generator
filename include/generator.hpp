#pragma once

#include "stm32f401xc.h"

#include <array>

constexpr auto _resolution_signal = 512u;


class Generator
{
private:
    static constexpr inline std::array<uint16_t, _resolution_signal> 
        datatable_sinewave{},
        datatable_sawewave{},
        datatable_triabgularwave{};

    Generator();
public:
    static void set_frequency(const uint16_t &freq);
    static void set_waveform(const uint8_t &waveform);
    static void initialize();
};