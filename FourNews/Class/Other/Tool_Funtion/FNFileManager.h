//
//  FNFileManager.h
//  FNBudejie
//
//  Created by 张战威 on 16/4/6.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNFileManager : NSObject

+ (NSInteger)getSizeWithFilePath:(NSString *)path;

+ (void)clearDiskWithFilePath:(NSString *)path;

@end
