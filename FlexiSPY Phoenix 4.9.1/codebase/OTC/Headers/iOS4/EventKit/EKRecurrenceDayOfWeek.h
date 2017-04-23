/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
//#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface EKRecurrenceDayOfWeek : NSObject <NSCopying>
{
    int _dayOfTheWeek;
    int _weekNumber;
}

+ (id)dayOfWeek:(int)arg1;
+ (id)dayOfWeek:(int)arg1 weekNumber:(int)arg2;
- (id)initWithDayOfTheWeek:(int)arg1 weekNumber:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)iCalendarDescription;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int weekNumber; // @synthesize weekNumber=_weekNumber;
@property(readonly, nonatomic) int dayOfTheWeek; // @synthesize dayOfTheWeek=_dayOfTheWeek;

@end

