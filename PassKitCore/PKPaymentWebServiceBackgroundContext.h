//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_backgroundTaskRecordsByTaskIdentifier;
}

+ (id)contextWithArchive:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier; // @synthesize backgroundTaskRecordsByTaskIdentifier=_backgroundTaskRecordsByTaskIdentifier;
- (id)taskIdentifiers;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (id)backroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned long long)arg2;
- (void)archiveAtPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

