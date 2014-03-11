//
//  BKUser.m
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "BKUser.h"

#import "NSString+Date.h"

@implementation BKUser

+ (instancetype)userWithDictionary:(NSDictionary *)dict {
    return [[self alloc] initWithDictionary:dict];
}

- (id)initWithDictionary:(NSDictionary *)dict {
    self = [super init];
    if (self) {
        self.userID = dict[@"user_id"];
        self.email = dict[@"user_email"];
        self.userHashID = dict[@"user_hash_id"];
        self.passwordHash = dict[@"password_hash"];
        self.mobilePhoneNumber = dict[@"mobile_phone_num"];
        self.bitpassBTCAddress = dict[@"bitpass_btc_address"];
        self.twoStepGoogleID = dict[@"two_step_google_id"];
        self.isEmailVerified = [dict[@"is_email_verified"] boolValue];
        self.lastEmailSendTime = [(NSString *)dict[@"last_email_send_time"] date];
        self.defaultBTCAddress = dict[@"default_btc_address"];
        self.timezone = dict[@"timezone"];
        self.creationTime = [(NSString *)dict[@"creation_time"] date];
        self.lastModifyTime = [(NSString *)dict[@"last_modify_time"] date];
    }
    
    return self;
}

@end
