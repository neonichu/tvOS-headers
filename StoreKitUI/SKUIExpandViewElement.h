//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUIExpandViewElement : SKUIViewElement
{
    _Bool _open;
    _Bool _previousIsOpen;
}

@property(nonatomic) _Bool previousIsOpen; // @synthesize previousIsOpen=_previousIsOpen;
@property(readonly, nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

