//
//  FNTopicGetDetailItem.h
//  FourNews
//
//  Created by 张战威 on 16/4/11.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNTopicGetDetailItem : NSObject

+ (void)getTopicNewsDetailWithExpertId:(NSString *)expertId :(BOOL)isNewQues :(NSInteger)pageCount :(void(^)(NSMutableArray *))complete;




@end
