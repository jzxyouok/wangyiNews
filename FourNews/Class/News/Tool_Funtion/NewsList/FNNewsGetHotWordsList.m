//
//  FNNewsGetHotWordsList.m
//  FourNews
//
//  Created by 张战威 on 16/4/7.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import "FNNewsGetHotWordsList.h"
#import "FNNewsHotWordItem.h"
#import <MJExtension.h>

@implementation FNNewsGetHotWordsList;

+ (void)getHotWordList:(void (^)(NSArray *))complete
{
    NSString *urlStr = [NSString stringWithFormat:@"http://c.3g.163.com/nc/search/hotWord.html"];
    [FNNetWorking GET:urlStr parameters:nil progress:^(NSProgress *progress) {
    } success:^(id responseObject, NSURLSessionDataTask *task) {
        
        NSArray *array = [FNNewsHotWordItem mj_objectArrayWithKeyValuesArray:responseObject[@"hotWordList"]];
        complete(array);
        
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        NSLog(@"%@",error);
    }];
}

@end
