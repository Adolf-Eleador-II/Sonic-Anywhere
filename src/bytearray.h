#ifndef SONIC_ANYWHERE_BYTEARRAY_H
#define SONIC_ANYWHERE_BYTEARRAY_H

#include "include_backend/tinyint.h"

typedef struct MutableByteArray {
    u8* arr;
    size size;
} MutableByteArray;

typedef struct ReadonlyByteArray {
    const u8* arr;
    size size;
} ReadonlyByteArray;

MutableByteArray bytearray__shift_mut(const MutableByteArray* arr, i32 shift_bytes);

#endif // SONIC_ANYWHERE_BYTEARRAY_H
