//
//  FNNewsDetailShareView.m
//  FourNews
//
//  Created by 张战威 on 16/4/21.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import "FNNewsDetailShareView.h"
#import <OpenShare.h>

@implementation FNNewsDetailShareView


- (IBAction)sinaWeiboShare:(id)sender {
    if (self.sinaWeiboShareBlock) {
        self.sinaWeiboShareBlock();
    }
}

- (IBAction)weiCharShare:(id)sender {
    if (self.weiCharShare) {
        self.weiCharShare();
    }
}
- (IBAction)qqZoneShare:(id)sender {
    if (self.qqZoneShare) {
        self.qqZoneShare();
    }
}

@end
