//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Parsec/PRSBagFetchSuccessDelegate-Protocol.h>
#import <Parsec/PRSImageSource-Protocol.h>
#import <Parsec/PRSInstalledAppsDataSourceDelegate-Protocol.h>
#import <Parsec/PRSResourceProvider-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString, PRSCache;
@protocol OS_dispatch_group, OS_dispatch_queue, PRSBagFetchSuccessDelegate><PRSInstalledAppsDataSourceDelegate, PRSSessionController;

@interface PRSSearchSession : NSObject <PRSInstalledAppsDataSourceDelegate, PRSResourceProvider, PRSBagFetchSuccessDelegate, PRSImageSource>
{
    id <PRSSessionController> _client;
    PRSCache *_cachedResults;
    PRSCache *_cachedWebResults;
    NSObject<OS_dispatch_group> *_feedbackGroup;
    NSMutableSet *_feedbackTasks;
    NSMutableArray *_feedback;
    _Bool _lastFeedbackZKW;
    _Bool _hasEngagementZKW;
    double _lastQueryTime;
    NSString *_userAgent;
    NSString *_queryLanguage;
    NSDictionary *sqfData;
    _Bool _valid;
    _Bool _enableFeedbackDebugLogging;
    id <PRSBagFetchSuccessDelegate><PRSInstalledAppsDataSourceDelegate> delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _sessionStartTime;
    NSArray *_supportedServices;
    double _retryAfter;
}

+ (id)getParsecURLRequestWithKeyboardLanguage:(id)arg1;
+ (id)getParsecURLRequest;
+ (id)getParsecHeadersFromURLRequest:(id)arg1;
+ (id)getParsecParametersFromURLRequest:(id)arg1;
+ (void)getLocation:(CDUnknownBlockType)arg1;
+ (id)currentLocation;
+ (id)_cURLFromURLRequest:(id)arg1;
+ (id)_createURLRequestWithString:(id)arg1 keyboardLanguage:(id)arg2 webSearch:(_Bool)arg3 scaleFactor:(double)arg4 allowLocation:(_Bool)arg5 fallbackURL:(id *)arg6 urlSessionConfiguration:(id)arg7 cachedQueries:(id)arg8 cachedResults:(id)arg9 userAgent:(id)arg10 queryLanguage:(id)arg11 isVoiceSearch:(_Bool)arg12;
+ (id)_createQueryURL:(id)arg1 userQueryString:(id)arg2 keyboardLanguage:(id)arg3 currentLocation:(id)arg4 locationSource:(id)arg5 currentCoordinates:(CDStruct_c3b9c2ee)arg6 storeFrontId:(id)arg7 locale:(id)arg8 context:(id)arg9 routineLocation:(id)arg10 userAgent:(id)arg11 queryLanguage:(id)arg12 isVoiceSearch:(_Bool)arg13;
+ (id)_urlRequestFromURL:(id)arg1 urlSessionConfiguration:(id)arg2 isVoiceSearch:(_Bool)arg3;
@property double retryAfter; // @synthesize retryAfter=_retryAfter;
@property _Bool enableFeedbackDebugLogging; // @synthesize enableFeedbackDebugLogging=_enableFeedbackDebugLogging;
@property(readonly, nonatomic) NSArray *supportedServices; // @synthesize supportedServices=_supportedServices;
@property(nonatomic) double sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) __weak id <PRSBagFetchSuccessDelegate><PRSInstalledAppsDataSourceDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)cannedCEPValues;
- (void)shrinkCaches;
- (id)installedApps;
- (void)isLocaleSupported:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)urlSessionForImage:(id)arg1;
- (void)getImageWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addFeedback:(id)arg1;
- (long long)getCategoryScoreToReturnInFeedback;
- (id)getRankingKnobs;
- (id)getCEPData;
@property(readonly, nonatomic) NSSet *appBlacklist;
- (_Bool)flushFeedback;
- (_Bool)flushFeedbackSync;
- (id)compressedData:(id)arg1;
- (void)setFeedbackStartTime;
- (void)killFeedback;
- (id)createFeedbackRequest:(id *)arg1 allowUserId:(_Bool)arg2 keyboardLanguage:(id)arg3;
- (void)syncFeedback;
- (void)pruneCache;
- (void)getCachedQueries:(id *)arg1 results:(id *)arg2 webSearch:(_Bool)arg3;
- (void)cacheQueryResponse:(id)arg1 webSearch:(_Bool)arg2;
- (void)queryCompleted:(id)arg1;
- (id)cachedResultSetForCompletionString:(id)arg1 webSearch:(_Bool)arg2;
- (id)cachedResultSetForQuery:(id)arg1 webSearch:(_Bool)arg2;
- (id)copyCachedResult:(id)arg1 webSearch:(_Bool)arg2;
- (void)_invalidate;
- (void)_endSession;
- (id)resourceWithID:(id)arg1;
@property(readonly, nonatomic) double searchRenderTimeout;
- (void)fetchCardDataFromURL:(id)arg1 withFactory:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 handler:(id)arg4;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 webSearch:(_Bool)arg4 handler:(id)arg5;
- (void)bagFetchSuccessCallback;
- (_Bool)isCurrentLocaleSupported:(id)arg1;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (id)fetchLookupBagProperties;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 webSearch:(_Bool)arg4 scaleFactor:(double)arg5 handler:(id)arg6;
- (id)dictationQueryWithResponse:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 webSearch:(_Bool)arg4 handler:(id)arg5;
- (id)createURLRequestWithString:(id)arg1 keyboardLanguage:(id)arg2 webSearch:(_Bool)arg3 scaleFactor:(double)arg4 allowLocation:(_Bool)arg5 fallbackURL:(id *)arg6;
- (id)createQueryURL:(id)arg1 userQueryString:(id)arg2 keyboardLanguage:(id)arg3 currentLocation:(id)arg4 locationSource:(id)arg5 currentCoordinates:(CDStruct_c3b9c2ee)arg6 storeFrontId:(id)arg7 locale:(id)arg8 context:(id)arg9 routineLocation:(id)arg10 isVoiceSearch:(_Bool)arg11;
- (id)urlRequestFromURL:(id)arg1;
- (void)setQueryLanguage:(id)arg1;
- (void)setUserAgentString:(id)arg1;
- (void)dealloc;
- (id)initWithClient:(id)arg1;
- (id)initWithClient:(id)arg1 delegate:(id)arg2;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2 delegate:(id)arg3;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (void)enableFeedbackDebugLogging:(_Bool)arg1;
- (void)deactivate;
- (void)activate;
- (void)warmup;
- (id)connectionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

