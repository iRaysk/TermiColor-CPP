#ifndef TERMICOLOR_H
#define TERMICOLOR_H

#pragma once
#include <string>

namespace termicolor {

    // ─────────────────────────────────────
    // RESET
    // ─────────────────────────────────────
    inline const std::string reset = "\033[0m";

    // ─────────────────────────────────────
    // TEXT STYLES
    // ─────────────────────────────────────
    inline const std::string bold        = "\033[1m";
    inline const std::string dim         = "\033[2m";
    inline const std::string italic      = "\033[3m";
    inline const std::string underline   = "\033[4m";
    inline const std::string blink       = "\033[5m";
    inline const std::string reverse     = "\033[7m";
    inline const std::string hidden      = "\033[8m";
    inline const std::string strike      = "\033[9m";

    // ─────────────────────────────────────
    // BASIC COLORS (30–37)
    // ─────────────────────────────────────
    inline const std::string black   = "\033[30m";
    inline const std::string red     = "\033[31m";
    inline const std::string green   = "\033[32m";
    inline const std::string yellow  = "\033[33m";
    inline const std::string blue    = "\033[34m";
    inline const std::string purple  = "\033[35m";
    inline const std::string cyan    = "\033[36m";
    inline const std::string white   = "\033[37m";

    // ─────────────────────────────────────
    // BRIGHT COLORS (90–97)
    // ─────────────────────────────────────
    inline const std::string bBlack  = "\033[90m";
    inline const std::string bRed    = "\033[91m";
    inline const std::string bGreen  = "\033[92m";
    inline const std::string bYellow = "\033[93m";
    inline const std::string bBlue   = "\033[94m";
    inline const std::string bPurple = "\033[95m";
    inline const std::string bCyan   = "\033[96m";
    inline const std::string bWhite  = "\033[97m";

    // ─────────────────────────────────────
    // BASIC BACKGROUNDS (40–47)
    // ─────────────────────────────────────
    inline const std::string blackBG   = "\033[40m";
    inline const std::string redBG     = "\033[41m";
    inline const std::string greenBG   = "\033[42m";
    inline const std::string yellowBG  = "\033[43m";
    inline const std::string blueBG    = "\033[44m";
    inline const std::string purpleBG  = "\033[45m";
    inline const std::string cyanBG    = "\033[46m";
    inline const std::string whiteBG   = "\033[47m";

    // ─────────────────────────────────────
    // BRIGHT BACKGROUNDS (100–107)
    // ─────────────────────────────────────
    inline const std::string bBlackBG  = "\033[100m";
    inline const std::string bRedBG    = "\033[101m";
    inline const std::string bGreenBG  = "\033[102m";
    inline const std::string bYellowBG = "\033[103m";
    inline const std::string bBlueBG   = "\033[104m";
    inline const std::string bPurpleBG = "\033[105m";
    inline const std::string bCyanBG   = "\033[106m";
    inline const std::string bWhiteBG  = "\033[107m";

    // ─────────────────────────────────────
    // BOLD COLOR VARIANTS
    // ─────────────────────────────────────
    inline const std::string boldBlack   = "\033[1;30m";
    inline const std::string boldRed     = "\033[1;31m";
    inline const std::string boldGreen   = "\033[1;32m";
    inline const std::string boldYellow  = "\033[1;33m";
    inline const std::string boldBlue    = "\033[1;34m";
    inline const std::string boldPurple  = "\033[1;35m";
    inline const std::string boldCyan    = "\033[1;36m";
    inline const std::string boldWhite   = "\033[1;37m";

} // namespace termicolor

#endif // TERMICOLOR_H