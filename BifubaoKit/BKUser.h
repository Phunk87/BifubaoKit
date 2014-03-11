//
//  BKUser.h
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 {
     "user_id":"10",
     "user_email":"bit.kevin@gmail.com",
     "user_hash_id":"9455d079fc703ca61b5a42415fd5ac6b",
     "password_hash":"16e03f626fe14cd2fe2aad2c852e032e",
     "mobile_phone_num":"",
     "bitpass_btc_address":"",
     "two_step_google_id":"0",
     "is_email_verified":"0",
     "last_email_send_time":"2014-02-17 11:28:54",
     "default_btc_address":"17D8JkutK8m1915othbkYerEVNKyHb9JaS",
     "timezone":"8",
     "creation_time":"2014-02-17 11:28:54",
     "last_modify_time":"2014-02-17 11:28:54"
 }
 */

@interface BKUser : NSObject

@property (nonatomic, strong) NSString  *userID;
@property (nonatomic, strong) NSString  *email;
@property (nonatomic, strong) NSString  *userHashID;
@property (nonatomic, strong) NSString  *passwordHash;
@property (nonatomic, strong) NSString  *mobilePhoneNumber;
@property (nonatomic, strong) NSString  *bitpassBTCAddress;
@property (nonatomic, strong) NSString  *twoStepGoogleID;
@property (nonatomic, assign) BOOL      isEmailVerified;
@property (nonatomic, strong) NSDate    *lastEmailSendTime;
@property (nonatomic, strong) NSString  *defaultBTCAddress;
@property (nonatomic, strong) NSString  *timezone;
@property (nonatomic, strong) NSDate    *creationTime;
@property (nonatomic, strong) NSDate    *lastModifyTime;

+ (instancetype)userWithDictionary:(NSDictionary *)dict;
- (id)initWithDictionary:(NSDictionary *)dict;

@end
