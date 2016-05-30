//
//  FNTopicTopView.m
//  FourNews
//
//  Created by 张战威 on 16/4/11.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import "FNTopicTopView.h"

@interface FNTopicTopView()

@property (weak, nonatomic) IBOutlet UIButton *backButton;

@end

@implementation FNTopicTopView

- (void)awakeFromNib
{
    [self.backButton addTarget:self action:@selector(backBtnClick) forControlEvents:UIControlEventTouchUpInside];
    
}

- (void)backBtnClick
{
    if (self.backBlock) {
        self.backBlock();
    }
}

@end
