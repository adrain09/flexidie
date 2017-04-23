//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IGDate, IGUser, NSString;

@interface IGDirectContent : NSObject
{
    NSString *_clientContextId;
    _Bool _isUploading;
    NSString *_itemId;
    IGUser *_user;
    IGDate *_sentAt;
    IGDate *_expireAt;
    unsigned long long _viewCount;
}

@property(nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(readonly, nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(copy, nonatomic) NSString *clientContextId; // @synthesize clientContextId=_clientContextId;
@property(retain, nonatomic) IGDate *expireAt; // @synthesize expireAt=_expireAt;
@property(retain, nonatomic) IGDate *sentAt; // @synthesize sentAt=_sentAt;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;

- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)contentHasReactions;
@property(readonly, nonatomic) NSString *contentTypeString;
@property(readonly, copy, nonatomic) NSString *digestDescription;
@property(readonly, nonatomic) _Bool senderIsCurrentUser;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyBySettingViewCount:(unsigned long long)arg1;
- (id)copyBySettingExpireAt:(id)arg1;
- (id)copyBySettingItemID:(id)arg1;
- (id)initWithUser:(id)arg1 sentAt:(id)arg2 itemID:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

