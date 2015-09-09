//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding>
{
    NSString *_clientIdentifier;
    long long _itemState;
    NSString *_representativeTitle;
    NSString *_statusString;
    long long _totalNumberOfItems;
    unsigned long long _transferTypes;
}

@property(nonatomic) unsigned long long transferTypes; // @synthesize transferTypes=_transferTypes;
@property(nonatomic) long long totalNumberOfItems; // @synthesize totalNumberOfItems=_totalNumberOfItems;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy, nonatomic) NSString *representativeTitle; // @synthesize representativeTitle=_representativeTitle;
@property(nonatomic) long long itemState; // @synthesize itemState=_itemState;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

