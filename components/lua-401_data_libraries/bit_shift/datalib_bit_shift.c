/*
 * Copyright 2022 Emiliano Gonzalez (egonzalez . hiperion @ gmail . com))
 * * Project Site: https://github.com/hiperiondev/esp32_lua_glue *
 *
 * This is based on other projects:
 *    Lua language (https://www.lua.org/)
 *    LittleFS port for ESP-IDF (https://github.com/joltwallet/esp_littlefs)
 *    Lightweight TFTP server library (https://github.com/lexus2k/libtftp)
 *    Others (see individual files)
 *
 *    please contact their authors for more information.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
#include "lua-401_port.h"
#include "datalib_core.h"
#include "datalib_bit_shift.h"

static int datalib_shl(lua_State *L) {
    return 0;
}

static int datalib_shr(lua_State *L) {
    return 0;
}

static int datalib_rol(lua_State *L) {
    return 0;
}

static int datalib_ror(lua_State *L) {
    return 0;
}

static const struct luaL_reg datalib_bit_shift[] = {
        { "_shl" ,  datalib_shl },
        { "_shr" ,  datalib_shr },
        { "_rol" ,  datalib_rol },
        { "_ror" ,  datalib_ror }
};

LUALIB_API void lua_datalib_bit_shiftopen(lua_State *L) {
    luaL_openl(L, datalib_bit_shift);
}
