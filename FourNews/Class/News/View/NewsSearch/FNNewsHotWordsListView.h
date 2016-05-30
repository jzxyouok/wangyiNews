//
//  FNNewsHotWordsListView.h
//  FourNews
//
//  Created by 张战威 on 16/4/7.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FNNewsHotWordItem.h"

@interface FNNewsHotWordsListView : UIView

@property (nonatomic, strong) NSArray<FNNewsHotWordItem *> *hotWords;

@property (nonatomic, strong) void(^hotWordBlock)(NSString *);


@end
