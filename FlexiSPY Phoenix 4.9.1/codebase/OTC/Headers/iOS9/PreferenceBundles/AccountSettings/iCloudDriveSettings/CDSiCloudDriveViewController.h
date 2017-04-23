//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CDSiCloudDriveViewController : NSObject //ACUIViewController <CDSUpgradeViewControllerDelegate>
{
    PSSpecifier *_iCloudDriveSpecifier;
    PSSpecifier *_statusInfoSpecifier;
    PSSpecifier *_iCloudDriveAppGroupSpecifier;
    PSSpecifier *_iCloudDriveAppSpecifier;
    NSMutableArray *_appSpecifiers;
    NSArray *_cellularSpecifiers;
    NSArray *_logsSpecifiers;
//    CDSServiceAccessCache *_accessCache;
    ACAccount *_appleAccount;
    _Bool _isFirstSetup;
    id _uiApplicationDidBecomeActiveObserver;
    id _brDidUpdateLastSyncStatusObserver;
}

+ (id)_sanitizeForDiagnoseName:(id)arg1;
//- (void).cxx_destruct;
- (void)upgradeViewControllerDidSucceed:(id)arg1;
- (void)upgradeViewControllerDidCancel:(id)arg1;
- (void)diagnoseDocumentsAndData:(id)arg1;
- (id)_collectBRLogs;
- (id)_diagnosePathForBR;
- (id)_appAccessGrantedForSpecifier:(id)arg1;
- (void)_setAppAccessGranted:(id)arg1 forSpecifier:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)_reloadSpecifiersThatDependOnDocumentsAndDataSwitchState;
- (id)_specifierForCloudKit;
- (void)_loadCloudKitSettingsBundleIfNeeded;
- (id)_valueForCloudKitSpecifier:(id)arg1;
- (id)_numberOfAppsUsingCloudKit;
- (void)_setUseCellular:(id)arg1 forSpecifier:(id)arg2;
- (id)_useCellular:(id)arg1;
- (void)_setShowAppOnHomeScreen:(id)arg1 forSpecifier:(id)arg2;
- (id)_showAppOnHomeScreen:(id)arg1;
- (void)_setDocumentsAndDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)_setDocumentsAndDataEnabled:(_Bool)arg1;
- (id)_documentsAndDataEnabled:(id)arg1;
- (id)_appSpecifierWithBundleID:(id)arg1;
- (id)_appSpecifiersForTCCServices;
- (id)_createSpecifiersForDiagnostics;
- (id)_createSpecifierForUpgradeButton;
- (void)_upgradeButtonWasTapped:(id)arg1;
- (id)_createSpecifiersForCellularSwitchCell;
- (id)specifiers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_appleAccount;
- (void)_reloadAppleAccount;

@end