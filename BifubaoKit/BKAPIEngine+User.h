//
//  BKAPIEngine+User.h
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "BKAPIEngine.h"

@interface BKAPIEngine (User)

- (void)loginWithUserName:(NSString *)userName
                 password:(NSString *)pwd
                   gaCode:(NSString *)gaCode
               completion:(BKRequestCompletionBlock)handler;

@end
