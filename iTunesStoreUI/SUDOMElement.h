//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMElement, NSString, UIImage, UIWebView;

@interface SUDOMElement : NSObject
{
    DOMElement *_element;
    UIImage *_image;
    UIWebView *_webView;
}

+ (struct CGRect)frameForDOMElement:(id)arg1;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) DOMElement *element; // @synthesize element=_element;
- (struct CGRect)_frame;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (id)newLabelForElementWithText:(id)arg1;
- (id)newImageView;
@property(readonly, nonatomic) NSString *innerText;
@property(readonly, nonatomic) UIImage *imageRepresentation;
@property(readonly, nonatomic) struct CGRect frame;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1;

@end

