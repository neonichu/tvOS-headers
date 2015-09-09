//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIRenditionKey, NSDate, NSString;
@protocol TDCustomAssetSource;

@interface TDCustomAssetImportInfo : NSObject
{
    CUIRenditionKey *_renditionKey;
    NSString *_elementName;
    NSString *_partName;
    NSObject<TDCustomAssetSource> *_customAsset;
    NSDate *_modificationDate;
    long long _renditionType;
    long long _resizingMode;
    long long _templateRenderingMode;
    NSString *_name;
    struct CGSize _resizableSliceSize;
    CDStruct_3c058996 _sliceInsets;
    struct CGRect _alignmentRect;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGRect alignmentRect; // @synthesize alignmentRect=_alignmentRect;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) struct CGSize resizableSliceSize; // @synthesize resizableSliceSize=_resizableSliceSize;
@property(nonatomic) long long resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) long long renditionType; // @synthesize renditionType=_renditionType;
@property(nonatomic) CDStruct_3c058996 sliceInsets; // @synthesize sliceInsets=_sliceInsets;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSObject<TDCustomAssetSource> *customAsset; // @synthesize customAsset=_customAsset;
@property(copy, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property(copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
@property(copy, nonatomic) CUIRenditionKey *renditionKey; // @synthesize renditionKey=_renditionKey;
@property(nonatomic) _Bool isTemplate;
- (long long)renditionSubtype;
- (void)dealloc;

@end

