//
//  GunosyNativeCustomEvent.h
//  GunosyAdsSample
//
//  Copyright © 2019年 Gunosy inc.,. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
    #import <MoPubSDKFramework/MoPub.h>
#else
    #import "MPNativeCustomEvent.h"
#endif

@interface GunosyNativeCustomEvent : MPNativeCustomEvent

+ (void)setUserId:(NSString *) userId;

@end
