/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBLeafIcon.h"

@class UIImage;
/*
@interface SBApplicationIcon : SBLeafIcon
{
    UIImage *_cachedSquareHomeScreenContentsImage;
}*/
@interface SBApplicationIcon (iOS9)
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (void)setBadge:(id)arg1;
- (id)automationID;
- (id)tags;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)__loadUnmaskedIconImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)asynchronouslyRequestIconImageForFormat:(int)arg1 completionHandler:(id)arg2;
- (id)_blockForGeneratingIconImageInBackgroundWithFormat:(SEL)arg1 complete:(int)arg2;
- (id)__loadIconImageForDataSource:(id)arg1 format:(int)arg2;
- (id)application;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplication:(id)arg1;

@end

