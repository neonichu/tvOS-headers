//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFMessageBodySubparser.h>

@class NSMutableArray;
@protocol MFMessageBodyElement_Private;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser
{
    NSMutableArray *_lastTextElements;
    id <MFMessageBodyElement_Private> _lastNonWhitespaceTextElement;
    CDUnknownBlockType _foundTextBlock;
    CDUnknownBlockType _foundWhitespaceBlock;
    _Bool _foundText;
    _Bool _foundForwardSeparator;
}

- (void)messageBodyParserDidFinishParsing:(id)arg1;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)_consumeAnyLastTextElementAsAttribution:(_Bool)arg1;
- (void)_consumeTextElement:(id)arg1 isAttribution:(_Bool)arg2;
- (void)setFoundWhitespaceBlock:(CDUnknownBlockType)arg1;
- (void)setFoundTextBlock:(CDUnknownBlockType)arg1;
- (void)copyBlocks;
- (void)dealloc;

@end

