//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElement, SKUILabelViewElement, SKUIURLViewElement;

@interface SKUIShareSheetActivityViewElement : SKUIViewElement
{
    NSString *_activityType;
    NSURL *_contentSourceURL;
}

@property(readonly, nonatomic) NSURL *contentSourceURL; // @synthesize contentSourceURL=_contentSourceURL;
@property(readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIURLViewElement *URL;
@property(readonly, nonatomic) SKUILabelViewElement *title;
@property(readonly, nonatomic) SKUILabelViewElement *message;
@property(readonly, nonatomic) SKUIImageViewElement *image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

