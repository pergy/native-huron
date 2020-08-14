#ifndef NATIVE_HURON_EMITTER_H_
#define NATIVE_HURON_EMITTER_H_

#ifdef __APPLE__
#include <native_huron/simple/emitter.h>
#else
#include <native_huron/with_uv_callback/emitter.h>
#endif

#endif // NATIVE_HURON_EMITTER_H_