//
//  BKRequest.m
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "BKRequest.h"

@interface BKRequest ()

@property (nonatomic, strong) NSString  *httpMethod;
@property (nonatomic, strong) NSString  *path;
@property (nonatomic, assign, getter = isLoginNeeded) BOOL      loginNeeded;

@end

@implementation BKRequest

+ (instancetype)requestWithHTTPMethod:(NSString *)httpMethod path:(NSString *)path isLoginNeeded:(BOOL)needLogin {
    return [[self alloc] initWithHTTPMethod:httpMethod path:path isLoginNeeded:needLogin];
}

+ (instancetype)requestWithPath:(NSString *)path isLoginNeeded:(BOOL)needLogin {
    return [self requestWithHTTPMethod:@"POST" path:path isLoginNeeded:needLogin];
}

- (id)initWithHTTPMethod:(NSString *)httpMethod path:(NSString *)path isLoginNeeded:(BOOL)needLogin {
    self = [super init];
    if (self) {
        self.httpMethod = httpMethod;
        self.path = path;
        self.loginNeeded = needLogin;
    }
    
    return self;
}

@end
