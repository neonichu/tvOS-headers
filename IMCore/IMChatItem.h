//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMCore/NSCopying-Protocol.h>

@class IMItem;

@interface IMChatItem : NSObject <NSCopying>
{
    IMItem *_item;
}

- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)_item;
- (id)_initWithItem:(id)arg1;
@property(readonly, nonatomic) _Bool canDelete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end

