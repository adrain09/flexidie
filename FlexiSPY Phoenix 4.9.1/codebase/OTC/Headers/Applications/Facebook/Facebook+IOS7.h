/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class FBDialog, FBMURLRequestFormatter, NSArray;

@interface Facebook : NSObject
{
   // id <FBSessionDelegate> _sessionDelegate;
    FBDialog *_loginDialog;
    FBDialog *_fbDialog;
    NSArray *_permissions;
    FBMURLRequestFormatter *_urlRequestFormatter;
}

@property(retain, nonatomic) FBMURLRequestFormatter *urlRequestFormatter; // @synthesize urlRequestFormatter=_urlRequestFormatter;
//@property(nonatomic) id <FBSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)fbDialogNotLogin:(BOOL)arg1;
- (void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2;
- (id)restServerUrlForMethod:(id)arg1;
- (id)squarePhotoURLForUserId:(id)arg1;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 timeoutOverride:(double)arg7;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 connectNow:(BOOL)arg5;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3;
- (id)requestWithGraphPath:(id)arg1 andDelegate:(id)arg2;
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 forceBootstrapHost:(BOOL)arg7 timeoutOverride:(double)arg8;
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 forceBootstrapHost:(BOOL)arg7;
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6;
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 connectNow:(BOOL)arg5;
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 forceBootstrapHost:(BOOL)arg5;
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;
- (id)requestWithParams:(id)arg1 andDelegate:(id)arg2;
- (id)parseURLParams:(id)arg1;
- (id)openUrl:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 delegate:(id)arg4 credentials:(id)arg5 connectNow:(BOOL)arg6 timeoutOverride:(double)arg7;
- (BOOL)isBootstrapMethod:(id)arg1;
- (BOOL)isSpecialMethod:(id)arg1;
- (void)dealloc;
- (id)initWithURLRequestFormatter:(id)arg1;

@end

