#pragma once

#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "hash.h"

#define NUMBER_OF_ROUNDS 27

typedef struct _Curl {
	trit_t state[STATE_LENGTH];
} Curl;

void init_curl(Curl *ctx);

void absorb(Curl *ctx, trit_t *const trits, int offset, int length);
void squeeze(Curl *ctx, trit_t *const trits, int offset, int length);
void reset(Curl *ctx);

