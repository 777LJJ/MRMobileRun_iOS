//
//  ZYLMainViewModel.h
//  MRMobileRun
//
//  Created by 丁磊 on 2019/4/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZYLMainViewModel : NSObject
+ (NSArray *)ZYLGetRunningHistoryModelArrayAtPage:(NSString *)page;
@end

NS_ASSUME_NONNULL_END