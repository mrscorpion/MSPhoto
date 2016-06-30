//
//  AFNetManager.m
//  Cybespoke
//
//  Created by mrscorpion on 15/10/8.
//  Copyright © 2015年 mrscorpion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface PhotoDBManger : NSObject

+(PhotoDBManger *)manager;

-(NSArray *)readData;

-(void)writeData:(NSArray *)photos;

-(void)saveUser:(User *)user;

@end
