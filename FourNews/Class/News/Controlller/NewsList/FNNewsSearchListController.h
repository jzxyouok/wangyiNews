//
//  FNNewsSearchListController.h
//  FourNews
//
//  Created by 张战威 on 16/4/8.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FNNewsSearchWordItem.h"

@interface FNNewsSearchListController : UITableViewController

@property (nonatomic, strong) NSArray<FNNewsSearchWordItem *> *searchItems;

@end
