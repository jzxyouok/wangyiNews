//
//  FNReadGetNewsListItem.h
//  FourNews
//
//  Created by 张战威 on 16/4/14.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNReadGetNewsListItem : NSObject

+ (void)getNewsListItemsWithCount:(NSInteger)count :(void(^)(NSArray *))complete;

@end
