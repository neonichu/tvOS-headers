//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMElement.h>

@interface DOMElement (MailExtras)
+ (_Bool)isRichTextStyle:(id)arg1;
- (_Bool)mf_hasBackgroundColorOrImage;
- (id)mf_computedBackgroundColor;
- (_Bool)mf_isContainedInAnyElementInSet:(id)arg1;
@property(readonly) DOMElement *mf_containingQuoteBlockElement;
@property(readonly) _Bool mf_isContainedInQuoteBlock;
@property(readonly) _Bool mf_isContainedInTable;
- (void)mf_stripCSSStyle;
- (void)recursivelyRemoveMailAttributes;
- (int)mf_quoteLevelDelta;
- (_Bool)isRichTextElement;
- (_Bool)isRichTextElementType;
- (_Bool)hasMarginsOfZero;
@end

