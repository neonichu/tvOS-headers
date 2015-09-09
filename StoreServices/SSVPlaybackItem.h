//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SSVPlaybackItem : NSObject
{
    NSDictionary *_itemDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *itemDictionary; // @synthesize itemDictionary=_itemDictionary;
- (void).cxx_destruct;
- (void)_enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, copy, nonatomic) id itemIdentifier;
@property(readonly, nonatomic) NSArray *assets;
- (id)assetForFlavor:(id)arg1;
- (id)initWithItemDictionary:(id)arg1;

@end
