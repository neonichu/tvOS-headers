//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKCollectionElement.h>

@class NSString;

@interface IKGridElement : IKCollectionElement
{
    _Bool _paged;
}

@property(readonly, nonatomic, getter=isPaged) _Bool paged; // @synthesize paged=_paged;
@property(readonly, nonatomic) unsigned long long rowCount;
@property(readonly, nonatomic) NSString *rowHeight;
@property(readonly, nonatomic) unsigned long long columnCount;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

