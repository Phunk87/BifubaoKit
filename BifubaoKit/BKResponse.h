//
//  BKResponse.h
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 {
    "error_no":0,
    "error_msg":"",
    "result": xxxxxx,
    "exec_time":"0.0756"
 }
 
 To handle error, check error number: https://wiki.bifubao.com/twiki/bin/view/Main/DevDoc#系统错误码
 */

@interface BKResponse : NSObject

@property (nonatomic, assign) int64_t   errorNumber;
@property (nonatomic, strong) NSString  *errorMessage;
@property (nonatomic, assign) double    executeTime;
@property (nonatomic, strong) id        result;

+ (instancetype)responseWithDictionary:(NSDictionary *)dict;
- (id)initWithDictionary:(NSDictionary *)dict;

@end
