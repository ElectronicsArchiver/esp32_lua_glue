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
#include "datalib_selection.h"

static int datalib_move(lua_State *L) {
    return 0;
}

static int datalib_sel(lua_State *L) {
    return 0;
}

static int datalib_max(lua_State *L) {
    return 0;
}

static int datalib_min(lua_State *L) {
    return 0;
}

static int datalib_limit(lua_State *L) {
    return 0;
}

static int datalib_mux(lua_State *L) {
    return 0;
}


static const struct luaL_reg datalib_selection[] = {
        { "_move"  ,datalib_move  },
        { "_sel"   ,datalib_sel   },
        { "_max"   ,datalib_max   },
        { "_min"   ,datalib_min   },
        { "_limit" ,datalib_limit },
        { "_mux"   ,datalib_mux   }
};

LUALIB_API void lua_datalib_selectionopen(lua_State *L) {
    luaL_openl(L, datalib_selection);
}
