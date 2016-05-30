//
//  FNStatusCacheTool.h
//  FourNews
//
//  Created by 张战威 on 16/5/8.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FNStatusParamModel.h"

@interface FNStatusCacheTool : NSObject

/**
 * 缓存数据的方法
 */
+ (void)addStatusCache:(NSArray *)dicArray :(NSString *)tName;

/**
 * 读取数据的方法
 */
+ (NSMutableArray *)getStatusCache:(FNStatusParamModel *)params;

// 还原阅读记录
+ (void)setOriginReadSkimWithName:(NSString *)tName;


@end
