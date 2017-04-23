/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@class CUCaptureController,CAMLowDiskSpaceAlertView,CAMLocationController,CAMMotionController,CAMNebulaDaemonProxyManager,CAMPersistenceController,CAMTimelapseState;

@interface CAMTimelapseController : NSObject { //<CAMNebulaDaemonTimelapseClientProtocol, CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate> {
    BOOL  __backendRecoveryNeeded;
    CUCaptureController * __captureController;
//    NSObject<OS_dispatch_source> * __captureTimer;
    CAMLowDiskSpaceAlertView * __diskSpaceAlert;
    BOOL  __focusAndExposureAdjusted;
    BOOL  __ignoringTimerCallbacksForTearDown;
    BOOL  __ignoringTimerCallbacksWaitingForCaptureResponse;
    NSCountedSet * __inFlightTimelapseUUIDs;
    CAMLocationController * __locationController;
    CAMMotionController * __motionController;
    CAMNebulaDaemonProxyManager * __nebulaDaemonProxyManager;
    NSMutableSet * __pendingCompletedStates;
    CAMPersistenceController * __persistenceController;
    BOOL  __previewStarted;
    CAMTimelapseState * __state;
//    <CAMTimelapseControllerDelegate> * _delegate;
}

@property (setter=_setBackendRecoveryNeeded:, nonatomic) BOOL _backendRecoveryNeeded;
@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_captureTimer;
@property (nonatomic, readonly) CAMLowDiskSpaceAlertView *_diskSpaceAlert;
@property (getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:, nonatomic) BOOL _focusAndExposureAdjusted;
@property (nonatomic, readonly) BOOL _ignoringTimerCallbacksForTearDown;
@property (nonatomic, readonly) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse;
@property (nonatomic, readonly) NSCountedSet *_inFlightTimelapseUUIDs;
@property (nonatomic, readonly) CAMLocationController *_locationController;
@property (nonatomic, readonly) CAMMotionController *_motionController;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
@property (nonatomic, readonly) NSMutableSet *_pendingCompletedStates;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (setter=_setPreviewStarted:, nonatomic) BOOL _previewStarted;
@property (nonatomic, readonly) CAMTimelapseState *_state;
@property (nonatomic, readonly) NSDate *captureStartTime;
@property (getter=isCapturing, nonatomic, readonly) BOOL capturing;
@property (readonly, copy) NSString *debugDescription;
//@property (nonatomic) <CAMTimelapseControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

//+ (struct __IOSurface { }*)_newVideoPreviewSurfaceForTimelapseState:(id)arg1;
+ (id)createPlaceholderResultForTimelapseState:(id)arg1;

//- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (BOOL)_backendRecoveryNeeded;
- (BOOL)_canCapturePhoto;
- (id)_captureController;
- (id)_captureTimer;
- (void)_captureTimerFired;
- (id)_createPlaceholderAssetForTimelapseState:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (id)_diskSpaceAlert;
- (void)_dismissDiskSpaceAlert;
- (BOOL)_enqueueCaptureRequest;
- (BOOL)_ignoringTimerCallbacksForTearDown;
- (BOOL)_ignoringTimerCallbacksWaitingForCaptureResponse;
- (id)_inFlightTimelapseUUIDs;
- (BOOL)_isFocusAndExposureAdjusted;
- (id)_locationController;
- (id)_motionController;
- (id)_nebulaDaemonProxyManager;
- (void)_notifyDidChangeCaptureWithUserInfo:(id)arg1;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (id)_pendingCompletedStates;
- (id)_persistenceController;
- (void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)arg1;
- (BOOL)_previewStarted;
- (void)_previewStarted:(id)arg1;
- (void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_restoreCaptureStateFromDisk;
- (void)_saveStateToDisk:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_setBackendRecoveryNeeded:(BOOL)arg1;
- (void)_setFocusAndExposureAdjusted:(BOOL)arg1;
- (void)_setNewCaptureStateForCaptureDevice:(int)arg1;
- (void)_setPreviewStarted:(BOOL)arg1;
- (void)_startCaptureTimer;
- (void)_startCapturingWithCaptureDevice:(int)arg1;
- (id)_state;
- (id)_stillImageCaptureRequestWithCurrentSettings;
- (void)_stopCapturingWithReasons:(int)arg1;
- (void)_teardownCaptureTimer;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3;
- (void)_updateLocationIfNecessary;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)captureStartTime;
- (void)dealloc;
- (id)delegate;
- (void)forceStopTimelapseCaptureWithReasons:(int)arg1;
- (id)init;
- (id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 nebulaDaemonProxyManager:(id)arg5;
- (BOOL)isCapturing;
- (void)restoreConfiguration;
- (void)setDelegate:(id)arg1;
- (void)startCapturingWithCaptureDevice:(int)arg1;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stopCapturingWithReasons:(int)arg1;

@end
