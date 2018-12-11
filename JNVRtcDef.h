#pragma once

#ifdef WIN32
#ifdef JNVRTCSDK_EXPORTS
#define JNVRTC_SDK_API __declspec(dllexport)
#else
#define JNVRTC_SDK_API __declspec(dllimport)
#endif
#else
#define JNVRTC_SDK_API __attribute__((visibility("default")))
#endif