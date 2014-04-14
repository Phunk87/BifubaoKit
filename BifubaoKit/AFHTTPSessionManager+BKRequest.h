//
//  AFHTTPSessionManager+BKRequest.h
//  BifubaoKit
//
//  Created by 0day on 14-4-13.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import "AFHTTPSessionManager.h"
#import "BKAPIEngine.h"

@interface AFHTTPSessionManager (BKRequest)

- (void)sendRequest:(BKRequest *)request WithCompletion:(BKRequestCompletionBlock)handler;

@end
