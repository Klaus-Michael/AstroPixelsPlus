#pragma once

#include "dome/LogicEngine.h"

// Local copies of AstroPixel logic PCB definitions so they can be customized without
// modifying the ReelTwo dependency.
template <uint8_t DATA_PIN = FRONT_LOGIC_PIN>
class CustomAstroPixelFLDPCB0 : public FastLEDPCB<WS2812B, DATA_PIN, 64, 0, 64, 8, 8>
{
public:
    static inline const byte* getLEDMap()
    {
        // Custom map for AstroPixel FLD (user-adjustable)
        static const byte sLEDmap[] PROGMEM =
        {
             0, 1, 2, 3, 4, 5, 6, 7,
             8, 9,10,11,12,13,14,15,
            16,17,18,19,20,21,22,23,
            24,25,26,27,28,29,30,31,
            32,33,34,35,36,37,38,39,
            40,41,42,43,44,45,46,47,
            48,49,50,51,52,53,54,55,
            56,57,58,59,60,61,62,63
        };
        return sLEDmap;
    }
};

template <uint8_t DATA_PIN = FRONT_LOGIC_PIN>
using CustomAstroPixelFLD = LogicEngineDisplay<CustomAstroPixelFLDPCB0<DATA_PIN>, LogicRenderGlyph5Pt>;

template <uint8_t DATA_PIN = REAR_LOGIC_PIN>
class CustomAstroPixelRLDPCB0 : public FastLEDPCB<WS2812B, DATA_PIN, 64, 0, 64, 16, 8>
{
public:
    static inline const byte* getLEDMap()
    {
        // Custom map for AstroPixel RLD (user-adjustable)
        static const byte sLEDmap[] PROGMEM =
        {
             0, 1, 2, 3, 4, 5, 6, 7,32,33,34,35,36,37,38,39,            
             8, 9,10,11,12,13,14,15,40,41,42,43,44,45,46,47,
            16,17,18,19,20,21,22,23,48,49,50,51,52,53,54,55,
            24,25,26,27,28,29,30,31,56,57,58,59,60,61,62,63       
        };
        return sLEDmap;
    }
};

template <uint8_t DATA_PIN = REAR_LOGIC_PIN>
using CustomAstroPixelRLD = LogicEngineDisplay<CustomAstroPixelRLDPCB0<DATA_PIN>, LogicRenderGlyph4Pt<LogicStaggerType::kNone>>;

template <uint8_t DATA_PIN = FRONT_PSI_PIN>
class CustomAstroPixelFrontPSIPCB : public FastLEDPCB<WS2812B, DATA_PIN, 25, 0, 25, 5, 5>
{
public:
    static inline const byte* getLEDMap()
    {
        // Custom map for AstroPixel front PSI (user-adjustable)
        static const byte sLEDmap[] PROGMEM =
        {
            31, 31, 31, 31, 31,
            31,  2,  3, 31, 31,
            31,  1,  0,  4, 31,
            31,  6,  5, 31, 31,
            31, 31, 31, 31, 31,
        };
        return sLEDmap;
    }
};

template <uint8_t DATA_PIN = FRONT_PSI_PIN>
using CustomAstroPixelFrontPSI = LogicEngineDisplay<CustomAstroPixelFrontPSIPCB<DATA_PIN>, LogicRenderGlyph5Pt, LogicEngineDefaults::PSICOLORWIPE>;

template <uint8_t DATA_PIN = REAR_PSI_PIN>
class CustomAstroPixelRearPSIPCB : public FastLEDPCB<WS2812B, DATA_PIN, 25, 0, 25, 5, 5>
{
public:
    static inline const byte* getLEDMap()
    {
        // Custom map for AstroPixel rear PSI (user-adjustable)
        static const byte sLEDmap[] PROGMEM =
        {
            31, 31, 31, 31, 31,
            31,  2,  3, 31, 31,
            31,  1,  0,  4, 31,
            31,  6,  5, 31, 31,
            31, 31, 31, 31, 31,
        };
        return sLEDmap;
    }
};

template <uint8_t DATA_PIN = REAR_PSI_PIN>
using CustomAstroPixelRearPSI = LogicEngineDisplay<CustomAstroPixelRearPSIPCB<DATA_PIN>, LogicRenderGlyph5Pt, LogicEngineDefaults::PSICOLORWIPE>;
