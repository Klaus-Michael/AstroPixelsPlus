#pragma once

#include "dome/LogicEngine.h"

// Local copies of AstroPixel logic PCB definitions so they can be customized without
// modifying the ReelTwo dependency.
template <uint8_t DATA_PIN = FRONT_LOGIC_PIN>
class CustomAstroPixelFLDPCB0 : public FastLEDPCB<WS2812B, DATA_PIN, 64, 0, 64, 6, 8>
{
public:
    static inline const byte* getLEDMap()
    {
        // Custom map for AstroPixel FLD (user-adjustable)
        static const byte sLEDmap[] PROGMEM =
        {
            // big 8x8 matrix (0-63) - 64 LEDs
            //  0, 1, 2, 3, 4, 5, 6, 7,
            //  8, 9,10,11,12,13,14,15,
            // 16,17,18,19,20,21,22,23,
            // 24,25,26,27,28,29,30,31,
            // 32,33,34,35,36,37,38,39,
            // 40,41,42,43,44,45,46,47,
            // 48,49,50,51,52,53,54,55,
            // 56,57,58,59,60,61,62,63
        
            // dense 8x8 matrix (0-63) - 64 LEDs
            //  7, 6, 5, 4, 3, 2, 1, 0,
            // 15,14,13,12,11,10, 9, 8, 
            // 23,22,21,20,19,18,17,16,
            // 31,30,29,28,27,26,25,24,
            // 39,38,37,36,35,34,33,32,
            // 47,46,45,44,43,42,41,40,
            // 55,54,53,52,51,50,49,48,
            // 63,62,61,60,59,58,57,56

            // dense adapted to Scale 6x8 Output
             5, 4, 3, 2, 1, 0,
            13,12,11,10, 9, 8, 
            21,20,19,18,17,16,
            29,28,27,26,25,24,
            37,36,35,34,33,32,
            45,44,43,42,41,40,
            53,52,51,50,49,48,
            61,60,59,58,57,56            
        };
        return sLEDmap;
    }
};

template <uint8_t DATA_PIN = FRONT_LOGIC_PIN>
using CustomAstroPixelFLD = LogicEngineDisplay<CustomAstroPixelFLDPCB0<DATA_PIN>, LogicRenderGlyph5Pt>;

template <uint8_t DATA_PIN = REAR_LOGIC_PIN>
class CustomAstroPixelRLDPCB0 : public FastLEDPCB<WS2812B, DATA_PIN, 64, 0, 64, 16, 4>
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
