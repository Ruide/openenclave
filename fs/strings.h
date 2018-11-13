// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef _FS_STRINGS_H
#define _FS_STRINGS_H

#include "common.h"

FS_EXTERN_C_BEGIN

size_t fs_strlcat(char* dest, const char* src, size_t size);

size_t fs_strlcpy(char* dest, const char* src, size_t size);

FS_EXTERN_C_END

#endif /* _FS_STRINGS_H */
