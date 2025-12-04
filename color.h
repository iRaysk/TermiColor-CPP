#ifndef COLORS_H
#define COLORS_H

#include <string>
#include <sstream>

namespace Colors {

    // ─────────────────────────────────────
    // RESET
    // ─────────────────────────────────────
    const std::string reset = "\033[0m";

    // ─────────────────────────────────────
    // TEXT STYLES
    // ─────────────────────────────────────
    const std::string bold        = "\033[1m";
    const std::string dim         = "\033[2m";
    const std::string italic      = "\033[3m";
    const std::string underline   = "\033[4m";
    const std::string blink       = "\033[5m";
    const std::string reverse     = "\033[7m";
    const std::string hidden      = "\033[8m";
    const std::string strike      = "\033[9m";

    // ─────────────────────────────────────
    // BASIC COLORS (30–37)
    // ─────────────────────────────────────
    const std::string black   = "\033[30m";
    const std::string red     = "\033[31m";
    const std::string green   = "\033[32m";
    const std::string yellow  = "\033[33m";
    const std::string blue    = "\033[34m";
    const std::string purple  = "\033[35m";
    const std::string cyan    = "\033[36m";
    const std::string white   = "\033[37m";

    // ─────────────────────────────────────
    // BRIGHT COLORS (90–97)
    // ─────────────────────────────────────
    const std::string bBlack  = "\033[90m";
    const std::string bRed    = "\033[91m";
    const std::string bGreen  = "\033[92m";
    const std::string bYellow = "\033[93m";
    const std::string bBlue   = "\033[94m";
    const std::string bPurple = "\033[95m";
    const std::string bCyan   = "\033[96m";
    const std::string bWhite  = "\033[97m";

    // ─────────────────────────────────────
    // BASIC BACKGROUNDS (40–47)
    // ─────────────────────────────────────
    const std::string blackBG   = "\033[40m";
    const std::string redBG     = "\033[41m";
    const std::string greenBG   = "\033[42m";
    const std::string yellowBG  = "\033[43m";
    const std::string blueBG    = "\033[44m";
    const std::string purpleBG  = "\033[45m";
    const std::string cyanBG    = "\033[46m";
    const std::string whiteBG   = "\033[47m";

    // ─────────────────────────────────────
    // BRIGHT BACKGROUNDS (100–107)
    // ─────────────────────────────────────
    const std::string bBlackBG  = "\033[100m";
    const std::string bRedBG    = "\033[101m";
    const std::string bGreenBG  = "\033[102m";
    const std::string bYellowBG = "\033[103m";
    const std::string bBlueBG   = "\033[104m";
    const std::string bPurpleBG = "\033[105m";
    const std::string bCyanBG   = "\033[106m";
    const std::string bWhiteBG  = "\033[107m";

    // ─────────────────────────────────────
    // BOLD COLOR VARIANTS (1;30–1;37)
    // ─────────────────────────────────────
    const std::string boldBlack   = "\033[1;30m";
    const std::string boldRed     = "\033[1;31m";
    const std::string boldGreen   = "\033[1;32m";
    const std::string boldYellow  = "\033[1;33m";
    const std::string boldBlue    = "\033[1;34m";
    const std::string boldPurple  = "\033[1;35m";
    const std::string boldCyan    = "\033[1;36m";
    const std::string boldWhite   = "\033[1;37m";

#endif
}