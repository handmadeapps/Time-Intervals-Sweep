//
//  NSDate+Utils.h
//
//  Created by Konstantinos Kontos on 13/10/14.
//  Copyright (c) 2014 Saturated Colors. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Utils)

+(NSNumber *)timestampFromDateStr:(NSString *)dateStr usingTimezone:(NSString *)timezoneStr;


@end
