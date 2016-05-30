//
//  FNNewsHistoryView.h
//  FourNews
//
//  Created by 张战威 on 16/4/7.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FNNewsListItem.h"

@interface FNNewsHistoryView : UIView

@property (nonatomic, strong) NSString *detailID;


@property (nonatomic, strong) void(^historyBlock)(id);

@property (nonatomic, strong) void(^moreBlock)();

@end
