//
//  BKAPIEngine.m
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "BKAPIEngine.h"

#import "BKRequest.h"
#import "BKResponse.h"

@implementation BKAPIEngine

+ (instancetype)defaultEngine {
    static BKAPIEngine  *engine;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        engine = [[BKAPIEngine alloc] init];
    });
    
    return engine;
}

- (void)sendRequest:(BKRequest *)request completion:(BKRequestCompletionBlock)hanler {
    
}

@end
