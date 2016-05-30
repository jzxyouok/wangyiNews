//
//  FNTopicDetailInsetView.h
//  FourNews
//
//  Created by 张战威 on 16/4/11.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FNTopicListItem.h"

@interface FNTopicDetailInsetView : UIView

@property (weak, nonatomic) IBOutlet UILabel *descL;
@property (weak, nonatomic) IBOutlet UILabel *focuL;
@property (weak, nonatomic) IBOutlet UIView *focuV;


+ (instancetype)TopicDetailInsetViewWith:(FNTopicListItem *)listItem;

@end
