/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIViewController.h"
//
//#import "CKTranscriptComposeDelegate-Protocol.h"
//#import "MFMailComposeViewControllerDelegate-Protocol.h"
//#import "UIActionSheetDelegate-Protocol.h"
//#import "UIAlertViewDelegate-Protocol.h"
//#import "UINavigationControllerDelegate-Protocol.h"
//#import "UIPopoverControllerDelegate-Protocol.h"
//#import "UISplitViewControllerDelegate-Protocol.h"

@class CKConversation, CKConversationListController, CKTranscriptController, MFMailComposeViewController, NSMutableArray, NSSet, UINavigationController, UIPanGestureRecognizer, UISplitViewController, UIView;

@interface CKMessagesController : UIViewController //<UISplitViewControllerDelegate, MFMailComposeViewControllerDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, CKTranscriptComposeDelegate, UINavigationControllerDelegate, UIAlertViewDelegate>
{
    UIViewController *_rightController;
    UINavigationController *_blankNavController;
    UINavigationController *_primaryNavigationController;
    CKConversationListController *_conversationListController;
    CKTranscriptController *_transcriptController;
    UIView *_transcriptDimmingView;
    UISplitViewController *_messagesSplitViewController;
    MFMailComposeViewController *_mailComposeController;
    UIViewController *_mainController;
    UIPanGestureRecognizer *_navigationBarPanGestureRecognizer;
    CKConversation *_currentConversation;
    NSMutableArray *_conversationCache;
    BOOL _ignoreConversationsBecomingStale;
    BOOL _transcriptDimmed;
    BOOL _presentingComposeSheet;
    BOOL _shouldDismissComposeSheetAndShowConversation;
    id _alertViewHandler;
    id _conversationListPopBlock;
}

@property(copy, nonatomic) id conversationListPopBlock; // @synthesize conversationListPopBlock=_conversationListPopBlock;
@property(copy, nonatomic) id alertViewHandler; // @synthesize alertViewHandler=_alertViewHandler;
@property(readonly, nonatomic, getter=isTranscriptDimmed) BOOL transcriptDimmed; // @synthesize transcriptDimmed=_transcriptDimmed;
@property(retain, nonatomic) CKConversation *currentConversation; // @synthesize currentConversation=_currentConversation;
@property(retain, nonatomic) UINavigationController *primaryNavigationController; // @synthesize primaryNavigationController=_primaryNavigationController;
@property(retain, nonatomic) CKTranscriptController *transcriptController; // @synthesize transcriptController=_transcriptController;
@property(retain, nonatomic) CKConversationListController *conversationListController; // @synthesize conversationListController=_conversationListController;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)showMailComposeSheetForAddress:(id)arg1;
@property(retain, nonatomic) id <NSCoding> autosaveIdentifier; // @dynamic autosaveIdentifier;
- (void)autosaveMailComposition;
- (void)showMailComposeSheetForAutosavedMessage;
- (void)_showMailComposeSheet;
- (void)showForwardedMessageParts:(id)arg1;
- (void)showNewMessageCompositionForMessageParts:(id)arg1;
- (void)_conversationLeft:(id)arg1;
- (void)_handleConversationBecameStale:(id)arg1;
- (void)splitViewController:(id)arg1 willShowViewController:(id)arg2 invalidatingBarButtonItem:(id)arg3;
- (void)splitViewController:(id)arg1 willHideViewController:(id)arg2 withBarButtonItem:(id)arg3 forPopoverController:(id)arg4;
- (void)setTranscriptDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isShowingDirtyModalView;
- (BOOL)isShowingTranscriptWithUnsentText;
- (BOOL)showUnreadFilteredConversations;
- (BOOL)hasUnreadFilteredConversations;
- (void)showConversationList:(BOOL)arg1;
- (BOOL)resumeToConversation:(id)arg1;
- (void)showConversationAndMessageForSearchURL:(id)arg1;
- (void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(BOOL)arg3;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3;
- (BOOL)_isShowingTranscriptController;
@property(readonly, nonatomic) BOOL isShowingConversationListController;
- (void)_updateAlertSuppressionContext;
- (void)__updateAlertSuppressionContext;
@property(readonly, nonatomic) NSSet *alertSuppressionContexts;
- (BOOL)_isShowingFullscreenController;
- (void)_showTranscriptController:(BOOL)arg1;
- (void)_showTranscriptController:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)currentCompositionHasContent;
- (BOOL)isComposingMessage;
- (BOOL)isShowingBlankTranscript;
- (BOOL)supportsAttachments;
- (void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2;
- (void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)didCancelComposition:(id)arg1;
- (void)cancelNewMessageComposition;
- (void)hideNewMessageCompositionPanel;
- (void)showNewMessageCompositionPanelAnimated:(BOOL)arg1;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3;
- (void)_showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3;
- (void)_popToConversationListAndPerformBlockAnimated:(BOOL)arg1 block:(id)arg2;
- (void)_presentNewMessageCompositionPanel:(id)arg1 animated:(BOOL)arg2;
- (void)showMessagesForAddress:(id)arg1 animate:(BOOL)arg2;
- (void)setDefaultPNGConfiguration;
- (void)_addConversationToCache:(id)arg1;
- (void)_clearConversationCache;
- (void)_pruneConversationCache;
- (void)_prepareToDumpCachedConversation:(id)arg1;
- (BOOL)_canDumpConversationFromCache:(id)arg1;
- (void)_confirmReadReceiptSettings;
- (void)_updateTranscriptDimmingView;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)rotatingHeaderView;
- (id)defaultFirstResponder;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)handleKeyboardPushGesture:(id)arg1;
- (void)setupNavigationBarPanGestureRecognizerIfNeeded;
- (void)loadView;
- (void)resetKeyboardState;
- (void)rememberKeyboardState;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)applicationDidEndResumeAnimation;
- (void)dealloc;
- (id)init;

@end

