//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIRenditionKey, NSString;

__attribute__((visibility("hidden")))
@interface CUINamedLookup : NSObject
{
    NSString *_name;
    CUIRenditionKey *_key;
    NSString *_signature;
    unsigned long long _storageRef;
    unsigned int _odContent:1;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)setRepresentsOnDemandContent:(_Bool)arg1;
@property(readonly, nonatomic) _Bool representsOnDemandContent;
- (id)renditionKey;
- (id)renditionName;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_cacheRenditionProperties;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

