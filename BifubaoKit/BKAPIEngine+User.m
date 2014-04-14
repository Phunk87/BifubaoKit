//
//  BKAPIEngine+User.m
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "BKAPIEngine+User.h"

@implementation BKAPIEngine (User)

- (void)loginWithUserName:(NSString *)userName
                 password:(NSString *)pwd
                   gaCode:(NSString *)gaCode
               completion:(BKRequestCompletionBlock)handler {
    BKRequest *request = [BKRequest requestWithPath:@"user/login" isLoginNeeded:NO];
    
    [self sendRequest:request completion:handler];
}

@end
