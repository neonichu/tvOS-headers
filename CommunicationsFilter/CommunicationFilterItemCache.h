//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject
{
    CommunicationFilterItem *_filterItem;
    long long _isInList;
}

@property(nonatomic) long long isInList; // @synthesize isInList=_isInList;
- (_Bool)matchesItem:(id)arg1;
- (void)dealloc;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;

@end

