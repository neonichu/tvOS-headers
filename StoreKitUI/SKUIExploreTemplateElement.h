//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUINavigationBarViewElement;

@interface SKUIExploreTemplateElement : SKUIViewElement
{
    _Bool _usesSplits;
}

@property(readonly, nonatomic) _Bool usesSplits; // @synthesize usesSplits=_usesSplits;
- (void)_getLeftSplit:(id *)arg1 rightSplit:(id *)arg2;
@property(readonly, nonatomic) SKUIViewElement *rightSplit;
@property(readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property(readonly, nonatomic) SKUIViewElement *leftSplit;
@property(readonly, nonatomic) NSArray *childViewElements;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

