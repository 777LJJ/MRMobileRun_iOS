//
//  MRLoginModel.h
//  MRMobileRun
//
//  Created by J J on 2019/3/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MRLoginModel : NSObject
- (NSMutableDictionary *)postRequestWithStudentID:(NSString *)studentID andPassword:(NSString *)password;
@end

NS_ASSUME_NONNULL_END