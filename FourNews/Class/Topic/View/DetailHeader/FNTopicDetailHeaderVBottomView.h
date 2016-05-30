//
//  FNTopicDetailHeaderVBottomView.h
//  FourNews
//
//  Created by 张战威 on 16/4/11.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FNTopicDetailHeaderVBottomView : UIView

@property (weak, nonatomic) IBOutlet UILabel *messageL;

@property (weak, nonatomic) IBOutlet UISegmentedControl *chooseSegment;

@property (nonatomic, strong) void(^segueBlock)();

@end
