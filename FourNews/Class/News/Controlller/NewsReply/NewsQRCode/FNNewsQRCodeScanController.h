//
//  FNNewsQRCodeScanController.h
//  FourNews
//
//  Created by 张战威 on 16/5/11.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FNNewsQRCodeScanController : UIViewController

@property (nonatomic, strong) void(^receiveQRCodeInformate)(NSString *);

@end
