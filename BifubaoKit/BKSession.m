//
//  BKSession.m
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "BKSession.h"

#import "NSString+Date.h"

@implementation BKSession

+ (instancetype)sessionWithDictionary:(NSDictionary *)dict {
    return [[self alloc] initWithDicitonary:dict];
}

- (id)initWithDicitonary:(NSDictionary *)dict {
    self = [super init];
    if (self) {
        self.sessionID = dict[@"session_id"];
        self.userID = dict[@"user_id"];
        self.token = dict[@"token"];
        self.expireTime = [(NSString *)dict[@"expire_time"] date];
        self.counter = (int64_t)[dict[@"counter"] longLongValue];
        self.rsaPublicKey = dict[@"rsa_public_key"];
        self.rsaPrivateKey = dict[@"rsa_private_key"];
        self.creationTime = [(NSString *)dict[@"creation_time"] date];
        self.lastModifyTime = [(NSString *)dict[@"last_modify_time"] date];
    }
    
    return self;
}

@end
