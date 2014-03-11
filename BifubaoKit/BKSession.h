//
//  BKSession.h
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 "session":{
     "session_id":"41",
     "user_id":"6",
     "token":"769642739d45a504636233c6ab6b3f20462fdda097c04ad257c2a42d3892016e",
     "expire_time":"2014-02-16 13:05:51",
     "counter":"1",
     "rsa_public_key":"-----BEGIN PUBLIC KEY-----
        MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA2nu4DeUGv3Ge/BTIMKS+
         ZSRTnyzntTvYsEd8vbUFU5x68igD7Nu6Y8193nTUtv3dg6fEX2ejMPqquO+Kw+Im
         LsGzeHtiDdMBIce0IDiXQPdtBuzyA81e8WO7I8avDI4ZgprYCG+2ikRQwDLPML1c
         PKDS7FdLmg3DegvovttEPp9rdsW8JxfAdh0hbNu2fmXVxurExyMgktT+tzmLkegH
         OWE0P6Eh70+A7zXSYpGogF1PJSnqIcue1ZIDRiFhdu3496i4SkVD9uc5z3+az2wQ
         L94OB4dZscPAyAqpHjwpFOC6se4RWbAj83eX2WdoGEBO7PrzvJHI27Tw3Q1aTHrZ
         JwIDAQAB
         -----END PUBLIC KEY-----
         ",
     "creation_time":"2014-02-13 13:05:51",
     "last_modify_time":"2014-02-13 13:05:51",
     "rsa_private_key":"-----BEGIN PRIVATE KEY-----
         MIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQDae7gN5Qa/cZ78
         FMgwpL5lJFOfLOe1O9iwR3y9tQVTnHryKAPs27pjzX3edNS2/d2Dp8RfZ6Mw+qq4
         74rD4iYuwbN4e2IN0wEhx7QgOJdA920G7PIDzV7xY7sjxq8MjhmCmtgIb7aKRFDA
         Ms8wvVw8oNLsV0uaDcN6C+i+20Q+n2t2xbwnF8B2HSFs27Z+ZdXG6sTHIyCS1P63
         OYuR6Ac5YTQ/oSHvT4DvNdJikaiAXU8lKeohy57VkgNGIWF27fj3qLhKRUP25znP
         f5rPbBAv3g4Hh1mxw8DICqkePCkU4Lqx7hFZsCPzd5fZZ2gYQE7s+vO8kcjbtPDd
         DVpMetknAgMBAAECggEBAMQKYRMunshnNiWwrBRhrmlomBPqohpPkdZSvs4mQJpO
         fU8Nsr/0RSHKQBe8syVjU0EP5zdH8fk/4rJAVj3/jQ1FRzljVI9c9tYNsEV9IdLs
         cIrXTy00OO3V9BRc8bMNSjyTniarvpoARIjAzoJIVxwbnkbs6WxYzz6SswuWCX05
         uzGiWBPrDY5GL9kwIL+kjGP1NzeuPWK0xHbIPAECa+L3BYCWTN4pMExV54fXbVa7
         dMiEZhNZoDXkq1U5oRopXDlcaUFOUm3MB670xUNwpavqD8jp93Dx8icq8vTTRRoj
         KvWiFe7sUnB4dk9dr6MCjgWeArw8eSuYLqsMlN3CfWkCgYEA/V3X2ZEFuDnuQQ1K
         o//sOmaWclNvRVbfc/RtUeGGPiwv70SqpljKllxNxlWGQpFCkG8cnqEnspYRFlFH
         vLCPDY1c6QiUG0UNHhix/xNYTDDA0Knoe3UAsqsadOOWUTKcXslCFOoUuB0jWvOU
         6mYPHoo4wxAMDA4mTgNvqDlprJUCgYEA3MEO9pj3AR7JMbket9lhflQRUY49HRDu
         BMd4YV5w4z1fInE/x0uh3CCIpdtOtHJEoYAI1aG38idAYsojsE/uUoNSJle57YTS
         tJdq8C9Ps8yvmNWhjFnPb4lhXXGFZd8j3612H6ryYfKACcFNQ8e24YK5p+72cK8Y
         WF4Cd8J0Q8sCgYEAjg13X7w3gLq6Ii7ZkmmCgJvT7fVphW7XiaOZRzcylNkhZv0Q
         0IMn0nWeBX0d8WSP9XrWiPnB0BbjLagUmG5FRkvjs6PjpgZo/F7MLT8jWlRbRqJ8
         fftzkLjt9GtFc/D0SxB7xE4Zn8B2eh/ndiQShgTpHjR5DKlCQKschyzpWqECgYEA
         2MofT7zYlZkOLG6H5DTusYkNmPH+wlSl6ruZVMXSRtc2XjSpVabIxcyNZZQBruOo
         0pFSG7o9UumJKXspoTRd71pXiqAMT11pL0CkHEvaEdCpgYYKqDJqrDZWD9Y0Et8X
         88n9fwv6DIaBhxL2NeIjj0M539mk2vSZC+8GrWWhmBECgYAxTjYwvk0NfqJcQZoC
         aIsxvCEfQrVBFO8zC91RwS5DqKyXFTaUFLlgA9PzzZL8d5epl2pzi5OOawUpqKkL
         KSeKAewCXgoCjclowMRN6a/ioABfE7ogQIWnqRPSm3yqrMRC2RjTv4kDsfJ30UZL
         WC6CYYfNdDc8eF0AVwBdxKHL+g==
         -----END PRIVATE KEY-----
         "
 }
 */

@interface BKSession : NSObject

@property (nonatomic, strong) NSString  *sessionID;
@property (nonatomic, strong) NSString  *userID;
@property (nonatomic, strong) NSString  *token;
@property (nonatomic, strong) NSDate    *expireTime;
@property (nonatomic, assign) int64_t   counter;
@property (nonatomic, strong) NSString  *rsaPublicKey;
@property (nonatomic, strong) NSString  *rsaPrivateKey;
@property (nonatomic, strong) NSDate    *creationTime;
@property (nonatomic, strong) NSDate    *lastModifyTime;

+ (instancetype)sessionWithDictionary:(NSDictionary *)dict;
- (id)initWithDicitonary:(NSDictionary *)dict;

@end
