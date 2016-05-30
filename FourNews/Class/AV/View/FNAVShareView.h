//
//  FNAVShareView.h
//  FourNews
//
//  Created by 张战威 on 16/5/11.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FNAVListItem.h"

@interface FNAVShareView : UIView

@property (nonatomic, strong) FNAVListItem *item;

+ (instancetype)avShareView;

@property (nonatomic, strong) void(^closeBlock)();

@end
