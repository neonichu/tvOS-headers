//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIIndexBarEntryViewElement : SKUIViewElement
{
    NSString *_targetIndexBarEntryID;
    long long _visibilityPriority;
}

@property(readonly, nonatomic) long long visibilityPriority; // @synthesize visibilityPriority=_visibilityPriority;
@property(readonly, copy, nonatomic) NSString *targetIndexBarEntryID; // @synthesize targetIndexBarEntryID=_targetIndexBarEntryID;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIViewElement *childElement;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

