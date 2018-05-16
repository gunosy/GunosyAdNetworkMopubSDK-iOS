//
//  GunosyNativeCustomEvent.h
//  GunosyAdsSample
//
//  Created by yuto.suzuki on 2018/04/24.
//  Copyright © 2018年 Gunosy inc.,. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#else
    #import "MPNativeCustomEvent.h"
#endif

@interface GunosyNativeCustomEvent : MPNativeCustomEvent

+ (void)setUserId:(NSString *) userId;

@end
