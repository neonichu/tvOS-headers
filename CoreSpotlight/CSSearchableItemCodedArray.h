//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class CSDecoder;

@interface CSSearchableItemCodedArray : NSArray
{
    CSDecoder *_items;
    CSDecoder *_itemsContent;
    CDStruct_b7fac349 _obj;
}

@property(readonly, nonatomic) CDStruct_b7fac349 obj; // @synthesize obj=_obj;
@property(readonly, nonatomic) CSDecoder *itemsContent; // @synthesize itemsContent=_itemsContent;
@property(readonly, nonatomic) CSDecoder *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithItems:(id)arg1 itemsContent:(id)arg2;
- (id)initWithItems:(id)arg1;

@end

