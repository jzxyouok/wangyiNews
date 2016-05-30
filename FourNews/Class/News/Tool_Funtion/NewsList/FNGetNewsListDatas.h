//
//  FNGetNewsListDatas.h
//  FourNews
//
//  Created by xmg on 16/3/28.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNGetNewsListDatas : NSObject

+ (void)getNewsListItemsWithProgramaid:(NSString *)pgmid :(NSInteger)count :(NSInteger)timeid :(void(^)(NSArray *nullable))complete;

@end
