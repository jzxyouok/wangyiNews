//
//  FNNewsGetCacheDetailNewsTool.h
//  FourNews
//
//  Created by 张战威 on 16/5/10.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNNewsGetCacheDetailNewsTool : NSObject

/**
 * 缓存数据的方法
 */
+ (void)addStatusCache:(NSObject *)newsItem;

/**
 * 读取数据的方法
 */
+ (NSObject *)getStatusCache:(NSObject *)detailId;

@end
