//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDSystemAvailabilityWatcher-Protocol.h>
#import <CloudKitDaemon/CKXPCDaemon-Protocol.h>

@class CKDClientContext, CKWatchdog, NSArray, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher, CKXPCDaemon>
{
    CKDClientContext *_context;
    _Bool _sandboxed;
    _Bool _canUsePackages;
    _Bool _canOpenByID;
    _Bool _canUseCKDuringBuddy;
    _Bool _canUseCKBeforeFirstUnlock;
    int _pid;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_cleanupOperationQueue;
    NSString *_procName;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    NSOperationQueue *_backgroundOperationThrottleQueue;
    NSString *_bundleIdentifier;
    NSString *_sourceApplicationBundleIdentifier;
    NSArray *_cachedSandboxExtensions;
    NSMutableArray *_pendingContexts;
    NSMutableSet *_pendingOperationIDs;
    CKWatchdog *_watchdog;
}

+ (id)sharedClientThrottlingOperationQueue;
@property(retain, nonatomic) CKWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(retain, nonatomic) NSMutableSet *pendingOperationIDs; // @synthesize pendingOperationIDs=_pendingOperationIDs;
@property(nonatomic) _Bool canUseCKBeforeFirstUnlock; // @synthesize canUseCKBeforeFirstUnlock=_canUseCKBeforeFirstUnlock;
@property(nonatomic) _Bool canUseCKDuringBuddy; // @synthesize canUseCKDuringBuddy=_canUseCKDuringBuddy;
@property(nonatomic) _Bool canOpenByID; // @synthesize canOpenByID=_canOpenByID;
@property(nonatomic) _Bool canUsePackages; // @synthesize canUsePackages=_canUsePackages;
@property(retain, nonatomic) NSMutableArray *pendingContexts; // @synthesize pendingContexts=_pendingContexts;
@property(retain, nonatomic) NSArray *cachedSandboxExtensions; // @synthesize cachedSandboxExtensions=_cachedSandboxExtensions;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSOperationQueue *backgroundOperationThrottleQueue; // @synthesize backgroundOperationThrottleQueue=_backgroundOperationThrottleQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQueue; // @synthesize cancellationQueue=_cancellationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) NSString *procName; // @synthesize procName=_procName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSOperationQueue *cleanupOperationQueue; // @synthesize cleanupOperationQueue=_cleanupOperationQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (_Bool)canUsePackagesWithError:(id *)arg1;
- (void)purgeTmpDirectory;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (id)statusReport;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performFetchEnvironmentOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)forceFinishClientSetupWithClientContext:(id)arg1;
- (void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)cancelAllOperations;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accountChangedWithID:(id)arg1;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareInfoOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifySharesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchSharesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchChangedRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchUserIdentitiesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverAllContactsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverUserInfosOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)openFileWithOpenInfo:(id)arg1 error:(id *)arg2;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)currentUserIDWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)_accountStatusWithClientContext:(id)arg1;
- (long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1;
- (void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isConnectionAuthorizedForOperation:(id)arg1 error:(id *)arg2;
- (_Bool)darkWakeEnabledEntitlement;
- (_Bool)usePublicTokenEntitlement;
- (id)apsEnvironmentEntitlement;
- (id)_clientPrefixEntitlement;
- (id)applicationIdentifier;
- (_Bool)hasAllowAccessBeforeFirstUnlockSinceBootEntitlement;
- (_Bool)hasAllowAccessDuringBuddyEntitlement;
- (_Bool)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (_Bool)hasCloudKitSystemServiceEntitlement;
- (_Bool)hasDeviceIdentifierEntitlement;
- (_Bool)hasProtectionDataEntitlement;
- (_Bool)_hasCustomAccountsEntitlement;
- (_Bool)_hasEnvironmentEntitlement;
- (_Bool)hasMasqueradingEntitlement;
- (_Bool)_hasEntitlementForKey:(id)arg1;
@property(readonly, nonatomic) CDStruct_6ad76789 auditToken;
- (void)tearDown;
- (void)setContext:(id)arg1;
@property(readonly, nonatomic) CKDClientContext *context;
- (void)setClientProxyAvailable:(_Bool)arg1;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (_Bool)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)_setupOperationQueues;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
