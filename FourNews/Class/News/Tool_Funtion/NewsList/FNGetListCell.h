//
//  FNGetListCell.h
//  FourNews
//
//  Created by 张战威 on 16/3/30.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>
@class FNNewsListItem;



@interface FNGetListCell : NSObject

+ (instancetype)cellWithTableView:(UITableView *)tableView :(FNNewsListItem *)item :(NSIndexPath *)indexPath;

@end
