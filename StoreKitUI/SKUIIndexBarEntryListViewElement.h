//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString;

@interface SKUIIndexBarEntryListViewElement : SKUIViewElement
{
    _Bool _indexBarHiddenWhenEmpty;
    long long _entryListElementType;
    long long _minimumEntityCount;
    NSString *_targetIndexBarEntryID;
}

@property(readonly, copy, nonatomic) NSString *targetIndexBarEntryID; // @synthesize targetIndexBarEntryID=_targetIndexBarEntryID;
@property(readonly, nonatomic) long long minimumEntityCount; // @synthesize minimumEntityCount=_minimumEntityCount;
@property(readonly, nonatomic, getter=isIndexBarHiddenWhenEmpty) _Bool indexBarHiddenWhenEmpty; // @synthesize indexBarHiddenWhenEmpty=_indexBarHiddenWhenEmpty;
@property(readonly, nonatomic) long long entryListElementType; // @synthesize entryListElementType=_entryListElementType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *childIndexBarEntryElements;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

