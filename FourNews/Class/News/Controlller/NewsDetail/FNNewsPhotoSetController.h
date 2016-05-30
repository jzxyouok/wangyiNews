//
//  FNNewsPhotoSetController.h
//  FourNews
//
//  Created by 张战威 on 16/4/5.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FNNewsPhotoSetItem.h"
#import "FNNewsListItem.h"

@interface FNNewsPhotoSetController : UIViewController

@property (nonatomic, strong) NSArray<FNNewsPhotoSetItem *> *photoSet;

@property (nonatomic, strong) NSString *photoSetid;

@property (nonatomic, strong) FNNewsListItem *listItem;

@end
