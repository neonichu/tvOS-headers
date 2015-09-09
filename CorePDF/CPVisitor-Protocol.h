//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CPBody, CPChunk, CPColumn, CPCompoundGraphic, CPImage, CPImageRegion, CPLayoutArea, CPPage, CPParagraph, CPRegion, CPRotation, CPShape, CPShapeRegion, CPTextBox, CPTextLine, CPZone;

@protocol CPVisitor
- (void)visitBody:(CPBody *)arg1;
- (void)visitRotation:(CPRotation *)arg1;
- (void)visitZone:(CPZone *)arg1;
- (void)visitShapeRegion:(CPShapeRegion *)arg1;
- (void)visitImageRegion:(CPImageRegion *)arg1;
- (void)visitTextBox:(CPTextBox *)arg1;
- (void)visitLayoutArea:(CPLayoutArea *)arg1;
- (void)visitColumn:(CPColumn *)arg1;
- (void)visitParagraph:(CPParagraph *)arg1;
- (void)visitTextLine:(CPTextLine *)arg1;
- (void)visitRegion:(CPRegion *)arg1;
- (void)visitPage:(CPPage *)arg1;
- (void)visitImage:(CPImage *)arg1;
- (void)visitCompoundGraphic:(CPCompoundGraphic *)arg1;
- (void)visitShape:(CPShape *)arg1;
- (void)visitChunk:(CPChunk *)arg1;
@end

