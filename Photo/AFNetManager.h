//
//  AFNetManager.h
//  Cybespoke
//
//  Created by mrscorpion on 15/10/8.
//  Copyright © 2015年 mrscorpion. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "User.h"

@interface AFNetManager : NSObject
 
+ (void)uploadUserData:(User *)user success:(void (^)(id))success fail:(void (^)(NSError *))fail;

@end
