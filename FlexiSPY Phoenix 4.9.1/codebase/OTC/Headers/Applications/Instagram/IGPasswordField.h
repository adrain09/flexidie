/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IGTextField.h"

@class UIButton;

@interface IGPasswordField : IGTextField
{
    BOOL _displayRightView;
    UIButton *_logInButton;
    UIButton *_forgotButton;
}

@property(nonatomic) BOOL displayRightView; // @synthesize displayRightView=_displayRightView;
@property(retain, nonatomic) UIButton *forgotButton; // @synthesize forgotButton=_forgotButton;
@property(retain, nonatomic) UIButton *logInButton; // @synthesize logInButton=_logInButton;
//- (void).cxx_destruct;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setIsVerifying:(BOOL)arg1;
- (void)showForgotButton;
- (void)showLogInButton;
- (void)configureButtons;
- (id)initWithFrame:(struct CGRect)arg1 displaysRightView:(BOOL)arg2;

@end

