/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ACAccountStore.h"

@class NSString;

@interface FBAccountStore : ACAccountStore
{
    NSString *_appID;
}

@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)requestSystemAccount:(id)arg1;
- (void)dealloc;
- (id)initWithAppID:(id)arg1;
- (id)init;

@end

