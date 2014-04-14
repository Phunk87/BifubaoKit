//
//  BKRequest.h
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BKRequest : NSObject

@property (nonatomic, strong) NSDictionary  *parameters;

+ (instancetype)requestWithHTTPMethod:(NSString *)httpMethod path:(NSString *)path isLoginNeeded:(BOOL)needLogin;
+ (instancetype)requestWithPath:(NSString *)path isLoginNeeded:(BOOL)needLogin; // Default httpMethod as @"POST"

- (id)initWithHTTPMethod:(NSString *)httpMethod path:(NSString *)path isLoginNeeded:(BOOL)needLogin;

@end
