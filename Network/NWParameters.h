//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSData, NSDictionary, NSSet, NSString, NSURL, NSUUID, NWAddressEndpoint, NWInterface;
@protocol OS_nw_parameters, OS_xpc_object;

@interface NWParameters : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_parameters> *_internalParameters;
}

@property(retain) NSObject<OS_nw_parameters> *internalParameters; // @synthesize internalParameters=_internalParameters;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSString *requiredCellularService;
- (_Bool)hasProhibitedNetworkAgents;
- (_Bool)hasRequiredNetworkAgents;
@property _Bool connectedByLaunchOnDemand;
@property _Bool connectedBySocket;
@property _Bool useDUET;
@property(getter=isPassive) _Bool passive;
@property _Bool prohibitFallback;
@property unsigned long long launchOnDemandJob;
@property(retain) NSString *launchOnDemandLabel;
@property long long poolPriority;
@property(retain) NSString *poolName;
@property(retain) NSObject<OS_xpc_object> *ledbellyEndpoints;
@property long long ledbellyID;
@property(readonly) _Bool isConditionalConnection;
@property(readonly, getter=isValid) _Bool valid;
- (void)setSourceApplicationWithBundleID:(id)arg1;
- (void)setSourceApplicationWithToken:(CDStruct_6ad76789)arg1;
@property unsigned long long maximumSSLProtocolVersion;
@property unsigned long long minimumSSLProtocolVersion;
- (int)sslProtocolWithTLSVersion:(unsigned short)arg1;
- (unsigned short)tlsVersionWithSSLProtocol:(int)arg1;
@property(copy) NSSet *SSLCipherSuites;
@property(copy) NSData *TLSSessionID;
@property _Bool enableTLS;
@property _Bool noProxy;
@property _Bool indefinite;
@property _Bool multipath;
@property long long dataProtectionClass;
@property _Bool requirePower;
@property _Bool allowPowerNap;
@property _Bool resolvePTR;
@property _Bool useP2P;
@property _Bool useAWDL;
@property _Bool useLongOutstandingQueries;
@property _Bool disableNagleAlgorithm;
@property _Bool reduceBuffering;
@property _Bool enableExtendedBackgroundIdle;
@property _Bool enableTFO;
@property _Bool persistent;
- (void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)requireNetworkAgentWithUUID:(id)arg1;
@property unsigned long long workload;
@property unsigned long long duration;
@property unsigned long long startTime;
@property long long requiredInterfaceType;
@property(retain) NWInterface *requiredInterface;
- (void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (void)prohibitNetworkAgentWithUUID:(id)arg1;
- (void)prohibitInterface:(id)arg1;
- (void)prohibitInterfaceSubtype:(long long)arg1;
- (void)prohibitInterfaceType:(long long)arg1;
@property(readonly) _Bool prohibitCellular;
@property _Bool prohibitExpensivePaths;
@property(copy) NSDictionary *proxyConfiguration;
@property(copy) NSURL *url;
@property _Bool reuseLocalAddress;
@property(retain) NWAddressEndpoint *localAddress;
@property unsigned char requiredAddressFamily;
- (_Bool)copyEffectiveAuditToken:(CDStruct_6ad76789 *)arg1;
@property(copy) NSString *effectiveBundleID;
@property(copy) NSUUID *effectiveProcessUUID;
- (_Bool)hasDelegatedProcessUUID;
@property(copy) NSUUID *processUUID;
@property unsigned int uid;
- (_Bool)hasDelegatedPIDForOriginatingPID:(int)arg1;
@property int pid;
@property unsigned short ipProtocol;
@property unsigned long long trafficClass;
@property(copy) NSString *account;
@property _Bool forceFallbackWin;
@property _Bool forceFallbackEligibility;
@property _Bool passiveConditionalConnection;
- (id)copyStrippedParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)initWithParameters:(id)arg1;
- (id)init;

@end
