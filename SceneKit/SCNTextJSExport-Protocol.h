//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSString;

@protocol SCNTextJSExport <JSExport>
+ (id)textWithString:(id)arg1 extrusionDepth:(double)arg2;
@property(nonatomic) double flatness;
@property(copy, nonatomic) id chamferProfile;
@property(nonatomic) long long chamferSegmentCount;
@property(nonatomic) double chamferRadius;
@property(copy, nonatomic) NSString *alignmentMode;
@property(copy, nonatomic) NSString *truncationMode;
@property(readonly, nonatomic) struct CGSize textSize;
@property(nonatomic) struct CGRect containerFrame;
@property(nonatomic, getter=isWrapped) _Bool wrapped;
@property(retain, nonatomic) id font;
@property(copy, nonatomic) id string;
@property(nonatomic) double extrusionDepth;
@end

