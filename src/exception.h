#pragma once

#include "os.h"

// Throw this to indicate prompting
#define ASYNC_EXCEPTION 0x2000

#define EXC_WRONG_PARAM 0x6B00
#define EXC_WRONG_LENGTH 0x6C00
#define EXC_INVALID_INS 0x6D00
#define EXC_WRONG_LENGTH_FOR_INS 0x917E
#define EXC_REJECT 0x6985
#define EXC_PARSE_ERROR 0x9405
#define EXC_WRONG_VALUES 0x6A80
#define EXC_SECURITY 0x6982
#define EXC_CLASS 0x6E00
#define EXC_NO_ERROR 0x9000
#define EXC_MEMORY_ERROR 0x9200

// Crashes can be harder to debug than exceptions and latency isn't a big concern
static inline void check_null(const void *ptr) {
    if (ptr == NULL) {
        THROW(EXC_MEMORY_ERROR);
    }
}
