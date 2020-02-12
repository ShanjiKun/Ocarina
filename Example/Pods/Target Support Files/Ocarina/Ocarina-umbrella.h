#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Ocarina.h"
#import "libxml2-kanna.h"

FOUNDATION_EXPORT double OcarinaVersionNumber;
FOUNDATION_EXPORT const unsigned char OcarinaVersionString[];

