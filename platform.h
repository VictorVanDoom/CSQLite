/**
 This header imports and wraps the sqlite-headers of the corresponding platform.
 Currently only Apple and Linux are supported. The Apple header is assumed to be installed 
 by homebrew (hence the location). On linux the default location of apt-get is assumed.
 
 Note: For any other platform an error-message is issured.
 
 Autohor: VictorVanDoom
 */

#ifndef CSQLite_platform_h
#define CSQLite_platform_h

#ifdef __linux__

    #import "/usr/include/sqlite3.h"

#elif __APPLE__

    #import "/usr/local/opt/sqlite/include/sqlite3.h"

#else

    #error "Platform not supported for SQLite3 header generation. Use either Apple or Linux."

#endif
