//
//  FNNewsSearchWordItem.h
//  FourNews
//
//  Created by 张战威 on 16/4/8.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNNewsSearchWordItem : NSObject
// 详情参数
@property (nonatomic, strong) NSString *docid;
// 标题
@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *skipID;

@property (nonatomic, strong) NSString *skipType;
// 时间
@property (nonatomic, strong) NSString *ptime;
@end
