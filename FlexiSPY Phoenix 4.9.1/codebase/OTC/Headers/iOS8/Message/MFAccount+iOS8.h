//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class ACAccount, NSDictionary, NSMutableDictionary, NSString;
/*
@interface MFAccount : NSObject
{
    ACAccount *_persistentAccount;
    int _persistentAccountLock;
    NSMutableDictionary *_unsavedAccountProperties;
    NSString *_sourceApplicationBundleIdentifier;
}*/
@interface MFAccount (iOS8)
+ (id)supportedDataclasses;
+ (id)saslProfileName;
+ (BOOL)isSSLEditable;
+ (BOOL)usesSSL;
+ (BOOL)isCommonPortNumber:(unsigned int)arg1;
+ (unsigned int)defaultSecurePortNumber;
+ (unsigned int)defaultPortNumber;
+ (id)hostname;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (id)myFullName;
+ (void *)legacyKeychainProtocol;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (id)accountTypeString;
+ (BOOL)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3;
+ (id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2;
+ (id)propertiesWhichRequireValidation;
+ (id)predefinedValueForKey:(id)arg1;
+ (BOOL)isPredefinedAccountType;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)accountTypeIdentifier;
+ (id)_accountClass;
+ (id)_newPersistentAccount;
+ (id)accountWithPersistentAccount:(id)arg1;
+ (id)authSchemesForAccountClass;
+ (id)accountWithProperties:(id)arg1;
+ (id)newAccountWithDictionary:(id)arg1;
+ (BOOL)shouldHealAccounts;
+ (void)setShouldHealAccounts:(BOOL)arg1;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
- (id)copyDiagnosticInformation;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (id)enabledDataclasses;
- (id)loginDisabledErrorWithTitle:(id)arg1;
- (id)inaccessiblePasswordErrorWithTitle:(id)arg1;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (BOOL)enableAccount;
- (BOOL)shouldEnableAfterError:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
@property(readonly) NSString *syncStoreIdentifier;
@property(readonly) NSString *uniqueId;
- (BOOL)_connectAndAuthenticate:(id)arg1;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (id)customTitleForAuthenticationError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (id)customTitleForError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)secureConnectionSettings;
- (id)insecureConnectionSettings;
- (id)alternateConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)defaultConnectionSettings;
- (id)certUIService;
- (id)authenticatedConnection;
- (BOOL)requiresAuthentication;
- (Class)connectionClass;
- (id)_newConnection;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (void)accountInfoDidChange;
- (void)setClientCertificates:(id)arg1;
- (id)clientCertificates;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)setTryDirectSSL:(BOOL)arg1;
- (BOOL)allowsTrustPrompt;
- (void)setUsesSSL:(BOOL)arg1;
- (BOOL)usesSSL;
- (void)validateConnections;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (struct __CFString *)connectionServiceType;
- (id)secureServiceName;
- (id)serviceName;
- (void)setPortNumber:(unsigned int)arg1;
- (unsigned int)defaultSecurePortNumber;
- (unsigned int)defaultPortNumber;
- (unsigned int)portNumber;
- (BOOL)fetchTokensIfNecessary:(id *)arg1;
@property(readonly) NSString *managedTag;
@property(readonly) ACAccount *accountForRenewingCredentials;
//- (BOOL)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
//- (BOOL)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setCredentialItem:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (id)credentialItemForKey:(id)arg1 error:(id *)arg2;
- (id)credentialItemForKey:(id)arg1;
- (unsigned int)credentialAccessibility;
- (id)password;
- (id)_passwordWithError:(id *)arg1;
- (id)_password;
- (void)setPassword:(id)arg1;
- (id)_credentialCreateIfNecessary:(BOOL)arg1 error:(id *)arg2;
- (id)_credentialCreateIfNecessary:(BOOL)arg1;
- (id)_credential;
@property(retain, nonatomic) NSString *hostname;
@property(retain, nonatomic) NSString *username;
@property(retain, nonatomic) NSString *displayName;
- (BOOL)canGoOffline;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
- (BOOL)_boolForAccountInfoKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)_objectForAccountInfoKey:(id)arg1;
- (id)valueInAccountPropertiesForKey:(id)arg1;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)_setAccountProperties:(id)arg1;
- (void)_queueAccountInfoDidChange;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
@property(readonly) NSDictionary *properties;
- (id)accountClass;
@property(readonly) NSString *type;
@property(readonly) NSString *parentAccountIdentifier;
@property(readonly) ACAccount *parentAccount;
@property(readonly) NSString *identifier;
- (void)removePersistentAccount;
- (void)savePersistentAccount;
@property(readonly) ACAccount *persistentAccount;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (void)setPersistentAccount:(id)arg1;
- (void)dealloc;
- (id)initWithPersistentAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;
- (BOOL)shouldFetchACEDBInfoForError:(id)arg1;

@end

