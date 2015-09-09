//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSObject, NSOrderedSet, NSString;
@protocol NSCopying, PLMomentAssetData, PLMomentListData;

@protocol PLMomentData <NSObject>
@property(retain, nonatomic) NSArray *userTitles;
@property(retain, nonatomic) NSString *uuid;
@property(nonatomic) short generationType;
@property(nonatomic) _Bool reverseLocationDataIsValid;
@property(retain, nonatomic) NSData *reverseLocationData;
@property(nonatomic) int cachedCount;
@property(retain, nonatomic) id <PLMomentListData> megaMomentList;
@property(retain, nonatomic) id <PLMomentListData> yearMomentList;
@property(retain, nonatomic) NSOrderedSet *assets;
@property(retain, nonatomic) CLLocation *approximateLocation;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(retain, nonatomic) NSDate *representativeDate;
@property(retain, nonatomic) NSDate *endDate;
@property(retain, nonatomic) NSDate *startDate;
- (void)removeAssetData:(id <PLMomentAssetData>)arg1;
- (void)replaceAssetDataAtIndex:(unsigned long long)arg1 withAssetData:(id <PLMomentAssetData>)arg2;
- (void)delete;
- (_Bool)isDeleted;
@end

