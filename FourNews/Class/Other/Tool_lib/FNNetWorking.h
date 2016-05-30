//
//  FNNetWorking.h
//  FourNews
//
//  Created by xmg on 16/3/28.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FNNetWorking : NSObject

+ (NSURLSessionDataTask *)GET:(NSString *)url parameters:(NSDictionary *)parameters progress:(void(^)(NSProgress *progress))progress success:(void(^)(id responseObject,NSURLSessionDataTask * task))success failure:(void(^)(NSURLSessionDataTask *task,NSError *error))taskError;

+ (NSURLSessionDataTask *)POST:(NSString *)url parameters:(NSDictionary *)parameters progress:(void(^)(NSProgress *progress))progress success:(void(^)(id responseObject,NSURLSessionDataTask * task))success failure:(void(^)(NSURLSessionDataTask *task,NSError *error))taskError;



@end
