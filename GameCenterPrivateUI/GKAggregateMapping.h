//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterPrivateUI/NSCopying-Protocol.h>

@class GKCollectionViewDataSource, NSMutableDictionary, NSString;

@interface GKAggregateMapping : NSObject <NSCopying>
{
    GKCollectionViewDataSource *_dataSource;
    long long _sectionCount;
    NSString *_dynamicTag;
    NSMutableDictionary *_globalToLocalSections;
    NSMutableDictionary *_localToGlobalSections;
    NSMutableDictionary *_globalSectionsToTags;
}

@property(retain, nonatomic) NSMutableDictionary *globalSectionsToTags; // @synthesize globalSectionsToTags=_globalSectionsToTags;
@property(retain, nonatomic) NSMutableDictionary *localToGlobalSections; // @synthesize localToGlobalSections=_localToGlobalSections;
@property(retain, nonatomic) NSMutableDictionary *globalToLocalSections; // @synthesize globalToLocalSections=_globalToLocalSections;
@property(retain, nonatomic) NSString *dynamicTag; // @synthesize dynamicTag=_dynamicTag;
@property(nonatomic) long long sectionCount; // @synthesize sectionCount=_sectionCount;
@property(retain, nonatomic) GKCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (unsigned long long)updateMappingsStartingWithGlobalSection:(unsigned long long)arg1;
- (void)addMappingFromGlobalSection:(unsigned long long)arg1 toLocalSection:(unsigned long long)arg2 withTag:(id)arg3;
- (id)tagForGlobalSection:(long long)arg1;
- (id)initWithGlobalToLocalMapping:(id)arg1;
- (id)init;
- (id)globalIndexPathForLocalIndexPath:(id)arg1;
- (id)localIndexPathForGlobalIndexPath:(id)arg1;
- (unsigned long long)globalSectionForLocalSection:(unsigned long long)arg1;
- (unsigned long long)localSectionForGlobalSection:(unsigned long long)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

