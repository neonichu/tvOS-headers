//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSApplication.h>

#import <TVMLKit/__TVMLKitExtensionAPI-Protocol.h>

@interface IKJSApplication (__TVMLAPI__) <__TVMLKitExtensionAPI>
@property(readonly) int ContentItemImageShapeExtraWide;
@property(readonly) int ContentItemImageShapeWide;
@property(readonly) int ContentItemImageShapeHDTV;
@property(readonly) int ContentItemImageShapeSDTV;
@property(readonly) int ContentItemImageShapeSquare;
@property(readonly) int ContentItemImageShapePoster;
@property(readonly) int ContentItemImageShapeNone;
@property(readonly) int TopShelfContentStyleSectioned;
@property(readonly) int TopShelfContentStyleInset;
- (struct CGSize)topShelfImageSizeForShape:(int)arg1:(int)arg2;
- (void)noteTopShelfDataChanged;
@end

