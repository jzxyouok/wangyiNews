//
//  FNAVGetAllColumns.h
//  FourNews
//
//  Created by 张战威 on 16/4/10.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNAVGetAllColumns : NSObject

+ (void)getAllColumns:(void(^)(NSArray *))complete;

@end
