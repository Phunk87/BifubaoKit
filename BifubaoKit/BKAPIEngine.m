//
//  BKAPIEngine.m
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "BKAPIEngine.h"

#import "AFNetworking.h"
#import "BKRequest.h"
#import "BKResponse.h"

@interface BKAPIEngine ()

@property (nonatomic, strong) AFHTTPSessionManager  *sessionManager;

@end

@implementation BKAPIEngine

+ (instancetype)defaultEngine {
    static BKAPIEngine  *engine;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        engine = [[BKAPIEngine alloc] init];
    });
    
    return engine;
}

- (id)init {
    self = [super init];
    if (self) {
        AFHTTPSessionManager *sessionManager = [[AFHTTPSessionManager alloc] initWithBaseURL:[NSURL URLWithString:BK_API_URI]];
        self.sessionManager = sessionManager;
    }
    
    return self;
}

- (void)sendRequest:(BKRequest *)request completion:(BKRequestCompletionBlock)hanler {
    
}

@end
