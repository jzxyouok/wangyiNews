//
//  YJSettingSelectedItem.h
//  FourNews
//
//  Created by 张战威 on 16/5/7.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import "YJSettingCellBaseItem.h"

@interface YJSettingSelectedItem : YJSettingCellBaseItem

//当是开关时,记录开关的状态
@property (nonatomic ,assign ,getter=isSelected) int selected;

@end
