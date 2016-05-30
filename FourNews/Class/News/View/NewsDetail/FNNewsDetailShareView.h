//
//  FNNewsDetailShareView.h
//  FourNews
//
//  Created by 张战威 on 16/4/21.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FNNewsDetailShareView : UIView

@property (nonatomic, strong) void(^sinaWeiboShareBlock)();

@property (nonatomic, strong) void(^weiCharShare)();

@property (nonatomic, strong) void(^qqZoneShare)();

@end

