

#ifndef CSQLite_shim_h
#define CSQLite_shim_h

//Use the brew version for Apple iOS/OS X, but standard location for Linux
#ifdef __APPLE__
#import "/usr/local/opt/sqlite/include/sqlite3.h"
#else
#import "/usr/include/sqlite3.h"
#endif // __APPLE__
#endif /* CSQLite_shim_h */
