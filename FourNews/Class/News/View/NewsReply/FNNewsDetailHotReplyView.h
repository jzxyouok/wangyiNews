//
//  FNNewsDetailHotReplyView.h
//  FourNews
//
//  Created by xmg on 16/4/3.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FNNewsDetailHotReplyView : UIView

@property (nonatomic, strong) NSArray *replyArray;

@property (nonatomic, assign) CGFloat totalHeight;

+ (CGFloat)totalHeightWithReplyArray:(NSArray *)array;

@end
