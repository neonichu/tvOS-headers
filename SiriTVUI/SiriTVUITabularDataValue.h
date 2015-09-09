//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSAttributedString, NSURL;

@interface SiriTVUITabularDataValue : SiriTVUITemplateItem
{
    _Bool _highlighted;
    NSAttributedString *_attributedText;
    NSURL *_imageURL;
    struct CGSize _imageSize;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (id)initWithAttributedText:(id)arg1;
- (id)initWithAttributedText:(id)arg1 imageURL:(id)arg2 imageSize:(struct CGSize)arg3;
- (id)initWithAttributedText:(id)arg1 imageURL:(id)arg2 imageSize:(struct CGSize)arg3 highlighted:(_Bool)arg4;
- (id)init;

@end

