//
//  FNNewsGetHotWordsList.h
//  FourNews
//
//  Created by 张战威 on 16/4/7.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNNewsGetHotWordsList : NSObject

+ (void)getHotWordList:(void(^)(NSArray *))complete;

@end
