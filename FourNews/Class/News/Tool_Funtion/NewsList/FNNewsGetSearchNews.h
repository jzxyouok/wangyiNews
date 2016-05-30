//
//  FNNewsGetSearchNews.h
//  FourNews
//
//  Created by 张战威 on 16/4/8.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNNewsGetSearchNews : NSObject

+ (void)getSearchNewsWithWord:(NSString *)word :(void(^)(NSArray *))complete;;

@end
