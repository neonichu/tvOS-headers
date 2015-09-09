//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/MDSearchQueryDelegate-Protocol.h>

@class ICCoreSpotlightSearchIndex, MDSearchQuery, NSString;
@protocol ICSearchAsyncQueryDelegate;

@interface ICCoreSpotlightSearchQuery : NSObject <MDSearchQueryDelegate>
{
    MDSearchQuery *_searchQuery;
    ICCoreSpotlightSearchIndex *_owner;
    id <ICSearchAsyncQueryDelegate> _asyncQueryDelegate;
}

@property(nonatomic) __weak id <ICSearchAsyncQueryDelegate> asyncQueryDelegate; // @synthesize asyncQueryDelegate=_asyncQueryDelegate;
@property(nonatomic) __weak ICCoreSpotlightSearchIndex *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) MDSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
- (void).cxx_destruct;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)cancel;
- (id)initWithSearchQuery:(id)arg1 asyncQueryDelegate:(id)arg2 owner:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

