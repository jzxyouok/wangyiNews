//
//  FNAVListCell.h
//  FourNews
//
//  Created by 张战威 on 16/4/10.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FNAVListItem.h"

@interface FNAVListCell : UITableViewCell

@property (nonatomic, strong) FNAVListItem *listItem;

@property (nonatomic, weak) UIButton *replyButton;

+ (CGFloat)totalHeightWithTitle:(NSString *)title;

@property (nonatomic, strong) void(^movieBlock)(NSString *,UIView *);


@property (nonatomic, strong) void(^shareBlock)(FNAVListItem *);


@end
