//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSString;

@interface SSVMediaContentTasteUpdateRequest : SSRequest <SSXPCCoding>
{
    _Bool _shouldInvalidateLocalCache;
    NSArray *_contentTasteItemUpdates;
}

@property(nonatomic) _Bool shouldInvalidateLocalCache; // @synthesize shouldInvalidateLocalCache=_shouldInvalidateLocalCache;
@property(copy, nonatomic) NSArray *contentTasteItemUpdates; // @synthesize contentTasteItemUpdates=_contentTasteItemUpdates;
- (void).cxx_destruct;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

