//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask
{
    id _appSpecificDataItemResult;
    _Bool _forceNoCache;
}

@property(nonatomic) _Bool forceNoCache; // @synthesize forceNoCache=_forceNoCache;
@property(retain, nonatomic) id appSpecificDataItemResult; // @synthesize appSpecificDataItemResult=_appSpecificDataItemResult;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end

