//
//  FNReadChooseListCell.m
//  FourNews
//
//  Created by 张战威 on 16/4/14.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import "FNReadChooseListCell.h"
#import "FNReadListSglImgCell.h"
#import "FNReadListThreeImgCell.h"

@implementation FNReadChooseListCell
static NSString * const sglID = @"sglImg";
static NSString * const thrID = @"thrImg";

+ (instancetype)cellWithItem:(FNReadListItem *)item :(UITableView *)tableView
{
    if (item.imgnewextra.count == 2) {
        FNReadListThreeImgCell *cell = [tableView dequeueReusableCellWithIdentifier:thrID];
        if (cell == nil) {
            cell = [[[NSBundle mainBundle] loadNibNamed:@"FNReadListThreeImgCell" owner:nil options:nil] lastObject];
        }
        return (id)cell;
    } else {
        FNReadListSglImgCell *cell = [tableView dequeueReusableCellWithIdentifier:sglID];
        if (cell == nil) {
            cell = [[[NSBundle mainBundle] loadNibNamed:@"FNReadListSglImgCell" owner:nil options:nil] lastObject];
        }
        return (id)cell;
    }
}

@end
