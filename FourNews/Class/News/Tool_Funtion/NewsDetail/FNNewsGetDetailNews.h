//
//  FNNewsGetDetailNews.h
//  FourNews
//
//  Created by 张战威 on 16/3/31.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNNewsGetDetailNews : NSObject

+ (void)getNewsDetailWithDocid:(NSString *)docid :(void (^)(id))complete;


@end
