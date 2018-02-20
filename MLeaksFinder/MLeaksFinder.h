//
//  MLeaksFinder.h
//  MLeaksFinder
//
//  Created by Nutchaphon Rewik on 20/02/2018.
//  Copyright © 2018 zeposhe. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for MLeaksFinder.
FOUNDATION_EXPORT double MLeaksFinderVersionNumber;

//! Project version string for MLeaksFinder.
FOUNDATION_EXPORT const unsigned char MLeaksFinderVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MLeaksFinder/PublicHeader.h>

#import "NSObject+MemoryLeak.h"

#ifdef MEMORY_LEAKS_FINDER_ENABLED
#define _INTERNAL_MLF_ENABLED MEMORY_LEAKS_FINDER_ENABLED
#else
#define _INTERNAL_MLF_ENABLED DEBUG
#endif

#define MEMORY_LEAKS_FINDER_RETAIN_CYCLE_ENABLED 0

#ifdef MEMORY_LEAKS_FINDER_RETAIN_CYCLE_ENABLED
#define _INTERNAL_MLF_RC_ENABLED MEMORY_LEAKS_FINDER_RETAIN_CYCLE_ENABLED
#elif COCOAPODS
#define _INTERNAL_MLF_RC_ENABLED COCOAPODS
#endif

#import <MLeaksFinder/MLeaksMessenger.h>

#import <MLeaksFinder/UIApplication+MemoryLeak.h>
#import <MLeaksFinder/UINavigationController+MemoryLeak.h>
#import <MLeaksFinder/UIPageViewController+MemoryLeak.h>
#import <MLeaksFinder/UISplitViewController+MemoryLeak.h>
#import <MLeaksFinder/UITabBarController+MemoryLeak.h>
#import <MLeaksFinder/UIView+MemoryLeak.h>
#import <MLeaksFinder/UIViewController+MemoryLeak.h>
#import <MLeaksFinder/UITouch+MemoryLeak.h>


