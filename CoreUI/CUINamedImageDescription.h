//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CUINamedImageDescription : NSObject
{
    double _scale;
    long long _idiom;
    long long _subtype;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    int _blendMode;
    long long _templateRenderingMode;
    long long _imageType;
    CDStruct_3c058996 _edgeInsets;
    CDStruct_3c058996 _alignmentEdgeInsets;
    long long _resizingMode;
    int _exifOrientation;
}

@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) long long resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) CDStruct_3c058996 alignmentEdgeInsets; // @synthesize alignmentEdgeInsets=_alignmentEdgeInsets;
@property(nonatomic) CDStruct_3c058996 edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) long long sizeClassVertical; // @synthesize sizeClassVertical=_sizeClassVertical;
@property(nonatomic) long long sizeClassHorizontal; // @synthesize sizeClassHorizontal=_sizeClassHorizontal;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)description;
@property(nonatomic) _Bool isTemplate;

@end

