//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject
{
    id _catalogIdentifier;
    struct CGSize _representationSize;
}

@property(nonatomic) struct CGSize representationSize; // @synthesize representationSize=_representationSize;
@property(copy, nonatomic) id catalogIdentifier; // @synthesize catalogIdentifier=_catalogIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithArtworkCatalog:(id)arg1 representativeSize:(struct CGSize)arg2;

@end

