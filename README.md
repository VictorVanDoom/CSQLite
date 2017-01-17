#CSQLite

**C bindings for the libsqlite3 library**

This module map links to the [sqlite3](https://www.sqlite.org/) library in Swift for the implementation of simple SQL persistence.

#Fork Note
The wrapper header - previously shim.h - was renamed to platform.h for clearity. The compiler-flags now also check explicitly for Apple and Linux platforms and print an error if any other Platform is found.
Also the new components are now available as release (which was not the case in the original repository).