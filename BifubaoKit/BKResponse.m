//
//  BKResponse.m
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "BKResponse.h"

@implementation BKResponse

+ (instancetype)responseWithDictionary:(NSDictionary *)dict {
    return [[self alloc] initWithDictionary:dict];
}

- (id)initWithDictionary:(NSDictionary *)dict {
    self = [super init];
    if (self) {
        self.errorNumber = (int64_t)[dict[@"error_no"] longLongValue];  // long long is 64-bit on 64-bit OS X/iOS platforms.
        self.errorMessage = dict[@"error_msg"];
        self.executeTime = [dict[@"exec_time"] doubleValue];
        self.result = dict[@"result"];
    }
    
    return self;
}

@end
