//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDeletedObject;

@interface _HDDeletedObjectEntry : NSObject
{
    long long _objectID;
    HKDeletedObject *_deletedObject;
}

@property(readonly, nonatomic) HKDeletedObject *deletedObject; // @synthesize deletedObject=_deletedObject;
@property(readonly, nonatomic) long long objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (id)initWithObjectID:(long long)arg1 deletedObject:(id)arg2;

@end

