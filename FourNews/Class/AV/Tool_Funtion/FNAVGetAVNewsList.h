//
//  FNAVGetAVNewsList.h
//  FourNews
//
//  Created by 张战威 on 16/4/10.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNAVGetAVNewsList : NSObject

+ (void)getAVNewsListWithTid:(NSString *)tid :(NSInteger)pageCount :(void(^)(NSArray *))complete;

@end
