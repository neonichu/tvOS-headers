//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID;

@interface PLTransientOrderKey : NSObject
{
    long long _orderValue;
    NSManagedObjectID *_objectID;
    NSManagedObjectContext *_moc;
}

@property(retain, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) long long orderValue; // @synthesize orderValue=_orderValue;
- (id)description;
- (void)dealloc;
- (id)secondaryOrderSortKey;
- (id)childManagedObject;

@end

