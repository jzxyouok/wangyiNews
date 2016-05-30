//
//  FNAVListItem.m
//  FourNews
//
//  Created by 张战威 on 16/4/10.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import "FNAVListItem.h"
#import <MJExtension.h>

@implementation FNAVListItem

+ (NSDictionary *)mj_replacedKeyFromPropertyName
{
    return @{@"descrip":@"description"};
}

@end
