//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionConfiguration.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage;
@protocol NSURLSessionAppleIDContext;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _requestCachePolicy;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    unsigned long long _networkServiceType;
    _Bool _allowsCellularAccess;
    _Bool _discretionary;
    NSString *_sharedContainerIdentifier;
    _Bool _sessionSendsLaunchEvents;
    id _connectionProxyDictionary;
    int _TLSMinimumSupportedProtocol;
    int _TLSMaximumSupportedProtocol;
    _Bool _HTTPShouldUsePipelining;
    _Bool _HTTPShouldSetCookies;
    unsigned long long _HTTPCookieAcceptPolicy;
    id _HTTPAdditionalHeaders;
    long long _HTTPMaximumConnectionsPerHost;
    _Bool _shouldUseExtendedBackgroundIdleMode;
    id _protocolClasses;
    _Bool _requiresPowerPluggedIn;
    NSURL *_directoryForDownloadedFiles;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSData *_sourceApplicationAuditTokenData;
    unsigned long long _TCPAdaptiveReadTimeout;
    unsigned long long _TCPAdaptiveWriteTimeout;
    _Bool _allowsExpensiveAccess;
    _Bool _allowsPowerNapScheduling;
    _Bool _preventsIdleSleepOnceConnected;
    _Bool _sessionSendsLaunchOnDemandEvents;
    _Bool _collectsTimingData;
    long long _timingDataOptions;
    _Bool _shouldSkipPreferredClientCertificateLookup;
    NSString *_ledBellyServiceIdentifier;
    id <NSURLSessionAppleIDContext> _appleIDContext;
    NSData *_atsContext;
    double _connectionCachePurgeTimeout;
    double _connectionCacheCellPurgeTimeout;
    _Bool _allowsRetryForBackgroundDataTasks;
    _Bool _respectsAllowsCellularAccessForDiscretionaryTasks;
    _Bool _overridesBackgroundSessionAutoRedirect;
    _Bool _performsEVCertCheck;
    _Bool _infersDiscretionaryFromOriginatingClient;
    NSString *_connectionPoolName;
    _Bool _prefersInfraWiFi;
    _Bool _allowsMultipathTCP;
    _Bool _allowsResponseMonitoringDuringBodyTranmission;
    _Bool _allowsIndefiniteConnections;
    NSString *_CTDataConnectionServiceType;
    _Bool _allowsTCPFastOpen;
    _Bool _allowsTLSSessionTickets;
    _Bool _preventsDirectWiFiAccess;
    _Bool _backgroundSession;
    NSString *_disposition;
    NSURLCredentialStorage *_phskip_credStorage;
    _Bool _phskip_credStorageSet;
    NSURLCache *_phskip_urlCache;
    _Bool _phskip_urlCacheSet;
    NSHTTPCookieStorage *_phskip_cookieStorage;
    _Bool _phskip_cookieStorageSet;
    struct _CFHSTSPolicy *_phskip_hstsStorage;
    _Bool _phskip_hstsStorageSet;
    long long _pipeliningHighWatermark;
    long long _pipeliningLowWatermark;
    long long _numPriorityLevels;
    long long _numFastLanes;
    long long _minimumFastLanePriority;
    _Bool _skip_download_unlink;
    _Bool _requiresClientToOpenFiles;
    NSString *_tcpConnectionPoolName;
    _Bool _forcesNewConnections;
    NSDictionary *_socketStreamProperties;
    _Bool _supportsAVAssetDownloads;
    _Bool _proxySession;
    NSSet *_authenticatorStatusCodes;
    _Bool _disallowsSPDY;
    _Bool _preventsIdleSleep;
    _Bool _usePipeliningHeuristics;
    NSArray *_contentDispHeadEncFallback;
    _Bool _shouldPreserveBackgroundSessionDisposition;
    _Bool _disablesOutOfProcessDirectWiFiUsage;
    _Bool _disablesUseOfProxySession;
    NSString *_companionAppBundleIdentifier;
    NSString *_watchAppBundleIdentifier;
    NSString *_watchExtensionBundleIdentifier;
    unsigned long long _forcedNetworkServiceType;
    NSDictionary *_overriddenDelegateOptions;
}

+ (_Bool)supportsSecureCoding;
- (void)set_overriddenDelegateOptions:(id)arg1;
- (id)_overriddenDelegateOptions;
- (void)set_forcedNetworkServiceType:(unsigned long long)arg1;
- (unsigned long long)_forcedNetworkServiceType;
- (void)set_watchExtensionBundleIdentifier:(id)arg1;
- (id)_watchExtensionBundleIdentifier;
- (void)set_watchAppBundleIdentifier:(id)arg1;
- (id)_watchAppBundleIdentifier;
- (void)set_companionAppBundleIdentifier:(id)arg1;
- (id)_companionAppBundleIdentifier;
- (void)set_disablesUseOfProxySession:(_Bool)arg1;
- (_Bool)_disablesUseOfProxySession;
- (void)set_disablesOutOfProcessDirectWiFiUsage:(_Bool)arg1;
- (_Bool)_disablesOutOfProcessDirectWiFiUsage;
- (void)set_shouldPreserveBackgroundSessionDisposition:(_Bool)arg1;
- (_Bool)_shouldPreserveBackgroundSessionDisposition;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (id)_contentDispHeadEncFallback;
- (void)set_usePipeliningHeuristics:(_Bool)arg1;
- (_Bool)_usePipeliningHeuristics;
- (void)set_preventsIdleSleep:(_Bool)arg1;
- (_Bool)_preventsIdleSleep;
- (void)set_disallowsSPDY:(_Bool)arg1;
- (_Bool)_disallowsSPDY;
- (void)set_authenticatorStatusCodes:(id)arg1;
- (id)_authenticatorStatusCodes;
- (void)set_proxySession:(_Bool)arg1;
- (_Bool)_isProxySession;
- (void)set_supportsAVAssetDownloads:(_Bool)arg1;
- (_Bool)_supportsAVAssetDownloads;
- (void)set_socketStreamProperties:(id)arg1;
- (id)_socketStreamProperties;
- (void)set_forcesNewConnections:(_Bool)arg1;
- (_Bool)_forcesNewConnections;
- (void)set_tcpConnectionPoolName:(id)arg1;
- (id)_tcpConnectionPoolName;
- (void)set_requiresClientToOpenFiles:(_Bool)arg1;
- (_Bool)_requiresClientToOpenFiles;
- (void)setSkip_download_unlink:(_Bool)arg1;
- (_Bool)skip_download_unlink;
- (void)setMinimumFastLanePriority:(long long)arg1;
- (long long)minimumFastLanePriority;
- (void)setNumFastLanes:(long long)arg1;
- (long long)numFastLanes;
- (void)setNumPriorityLevels:(long long)arg1;
- (long long)numPriorityLevels;
- (void)setPipeliningLowWatermark:(long long)arg1;
- (long long)pipeliningLowWatermark;
- (void)setPipeliningHighWatermark:(long long)arg1;
- (long long)pipeliningHighWatermark;
- (void)set_phskip_hstsStorageSet:(_Bool)arg1;
- (_Bool)_phskip_hstsStorageSet;
- (void)set_phskip_hstsStorage:(struct _CFHSTSPolicy *)arg1;
- (struct _CFHSTSPolicy *)_phskip_hstsStorage;
- (void)set_phskip_cookieStorageSet:(_Bool)arg1;
- (_Bool)_phskip_cookieStorageSet;
- (void)set_phskip_cookieStorage:(id)arg1;
- (id)_phskip_cookieStorage;
- (void)set_phskip_urlCacheSet:(_Bool)arg1;
- (_Bool)_phskip_urlCacheSet;
- (void)set_phskip_urlCache:(id)arg1;
- (id)_phskip_urlCache;
- (void)set_phskip_credStorageSet:(_Bool)arg1;
- (_Bool)_phskip_credStorageSet;
- (void)set_phskip_credStorage:(id)arg1;
- (id)_phskip_credStorage;
- (void)setDisposition:(id)arg1;
- (id)disposition;
- (void)setBackgroundSession:(_Bool)arg1;
- (_Bool)isBackgroundSession;
- (void)set_preventsDirectWiFiAccess:(_Bool)arg1;
- (_Bool)_preventsDirectWiFiAccess;
- (void)set_allowsTLSSessionTickets:(_Bool)arg1;
- (_Bool)_allowsTLSSessionTickets;
- (void)set_allowsTCPFastOpen:(_Bool)arg1;
- (_Bool)_allowsTCPFastOpen;
- (void)set_CTDataConnectionServiceType:(id)arg1;
- (id)_CTDataConnectionServiceType;
- (void)set_allowsIndefiniteConnections:(_Bool)arg1;
- (_Bool)_allowsIndefiniteConnections;
- (void)set_allowsResponseMonitoringDuringBodyTranmission:(_Bool)arg1;
- (_Bool)_allowsResponseMonitoringDuringBodyTranmission;
- (void)set_allowsMultipathTCP:(_Bool)arg1;
- (_Bool)_allowsMultipathTCP;
- (void)set_prefersInfraWiFi:(_Bool)arg1;
- (_Bool)_prefersInfraWiFi;
- (void)set_connectionPoolName:(id)arg1;
- (id)_connectionPoolName;
- (void)set_infersDiscretionaryFromOriginatingClient:(_Bool)arg1;
- (_Bool)_infersDiscretionaryFromOriginatingClient;
- (void)set_performsEVCertCheck:(_Bool)arg1;
- (_Bool)_performsEVCertCheck;
- (void)set_overridesBackgroundSessionAutoRedirect:(_Bool)arg1;
- (_Bool)_overridesBackgroundSessionAutoRedirect;
- (void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(_Bool)arg1;
- (_Bool)_respectsAllowsCellularAccessForDiscretionaryTasks;
- (void)set_allowsRetryForBackgroundDataTasks:(_Bool)arg1;
- (_Bool)_allowsRetryForBackgroundDataTasks;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (double)_connectionCacheCellPurgeTimeout;
- (void)set_connectionCachePurgeTimeout:(double)arg1;
- (double)_connectionCachePurgeTimeout;
- (void)set_atsContext:(id)arg1;
- (id)_atsContext;
- (void)set_appleIDContext:(id)arg1;
- (id)_appleIDContext;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (id)_ledBellyServiceIdentifier;
- (void)set_shouldSkipPreferredClientCertificateLookup:(_Bool)arg1;
- (_Bool)_shouldSkipPreferredClientCertificateLookup;
- (void)set_timingDataOptions:(long long)arg1;
- (long long)_timingDataOptions;
- (void)set_collectsTimingData:(_Bool)arg1;
- (_Bool)_collectsTimingData;
- (void)set_sessionSendsLaunchOnDemandEvents:(_Bool)arg1;
- (_Bool)_sessionSendsLaunchOnDemandEvents;
- (void)set_preventsIdleSleepOnceConnected:(_Bool)arg1;
- (_Bool)_preventsIdleSleepOnceConnected;
- (void)set_allowsPowerNapScheduling:(_Bool)arg1;
- (_Bool)_allowsPowerNapScheduling;
- (void)set_allowsExpensiveAccess:(_Bool)arg1;
- (_Bool)_allowsExpensiveAccess;
- (void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1;
- (unsigned long long)_TCPAdaptiveWriteTimeout;
- (void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1;
- (unsigned long long)_TCPAdaptiveReadTimeout;
- (void)set_sourceApplicationAuditTokenData:(id)arg1;
- (id)_sourceApplicationAuditTokenData;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (id)_sourceApplicationSecondaryIdentifier;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (id)_sourceApplicationBundleIdentifier;
- (void)set_directoryForDownloadedFiles:(id)arg1;
- (id)_directoryForDownloadedFiles;
- (void)set_requiresPowerPluggedIn:(_Bool)arg1;
- (_Bool)_requiresPowerPluggedIn;
- (void)setProtocolClasses:(id)arg1;
- (id)protocolClasses;
- (void)setShouldUseExtendedBackgroundIdleMode:(_Bool)arg1;
- (_Bool)shouldUseExtendedBackgroundIdleMode;
- (void)setHTTPMaximumConnectionsPerHost:(long long)arg1;
- (long long)HTTPMaximumConnectionsPerHost;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (id)HTTPAdditionalHeaders;
- (void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1;
- (unsigned long long)HTTPCookieAcceptPolicy;
- (void)setHTTPShouldSetCookies:(_Bool)arg1;
- (_Bool)HTTPShouldSetCookies;
- (void)setHTTPShouldUsePipelining:(_Bool)arg1;
- (_Bool)HTTPShouldUsePipelining;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (int)TLSMaximumSupportedProtocol;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (int)TLSMinimumSupportedProtocol;
- (void)setConnectionProxyDictionary:(id)arg1;
- (id)connectionProxyDictionary;
- (void)setSessionSendsLaunchEvents:(_Bool)arg1;
- (_Bool)sessionSendsLaunchEvents;
- (void)setSharedContainerIdentifier:(id)arg1;
- (id)sharedContainerIdentifier;
- (void)setDiscretionary:(_Bool)arg1;
- (_Bool)isDiscretionary;
- (void)setAllowsCellularAccess:(_Bool)arg1;
- (_Bool)allowsCellularAccess;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (unsigned long long)networkServiceType;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (double)timeoutIntervalForResource;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (double)timeoutIntervalForRequest;
- (void)setRequestCachePolicy:(unsigned long long)arg1;
- (unsigned long long)requestCachePolicy;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (struct HTTPConnectionCacheLimits)getConnectionCacheLimits;
- (void *)_copyAttribute:(struct __CFString *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (struct OpaqueCFHTTPCookieStorage *)_copyCFCookieStorage;
- (id)URLCredentialStorage;
- (void)setURLCache:(id)arg1;
- (id)URLCache;
- (void)setHTTPCookieStorage:(id)arg1;
- (id)HTTPCookieStorage;
- (void)setHSTSPolicy:(struct _CFHSTSPolicy *)arg1;
- (struct _CFHSTSPolicy *)copyHSTSPolicy;
- (id)initWithDisposition:(id)arg1;

@end

