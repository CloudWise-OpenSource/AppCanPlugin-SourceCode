//
//  EUExCloudwiseMAgent.m
//  EUExCloudwiseMAgent
//
//  Created by yunzhihui on 15/7/31.
//  Copyright (c) 2015年 cloudwise. All rights reserved.
//

#import "EUExCloudwiseMAgent.h"
#import "SmartAgent.h"
@implementation EUExCloudwiseMAgent


-(void)startAgentWithAppKey:(NSMutableArray *)array
{
    if ([array isKindOfClass:[NSMutableArray class]] && [array count]>0) {
        NSString *appKey = [array firstObject];
        if ([appKey isKindOfClass:[NSString class]]) {
            [[SmartAgent sharedInstance] startOnCloudWithAppKey:appKey];
        }
    }
}

- (void)cwsaPrintLog:(NSMutableArray *)array{
    if ([array isKindOfClass:[NSMutableArray class]] && [array count]>0) {
        NSString *print = [array firstObject];
        if ([print isKindOfClass:[NSString class]]) {
            if ([print isEqualToString:@"YES"]) {
                [[SmartAgent sharedInstance] printLog:YES];
            }else{
                [[SmartAgent sharedInstance] printLog:NO];
            }
        }
    }
}

@end
