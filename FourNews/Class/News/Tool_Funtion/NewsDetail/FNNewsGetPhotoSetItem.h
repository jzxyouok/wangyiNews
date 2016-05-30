//
//  FNNewsGetPhotoSetItem.h
//  FourNews
//
//  Created by 张战威 on 16/4/5.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNNewsGetPhotoSetItem : NSObject

+ (void)getNewsDetailWithPhotoid:(NSString *)photoid :(void (^)(id))complete;

@end
