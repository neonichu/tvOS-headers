//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKParticipant.h>

@interface EKOrganizer : EKParticipant
{
}

+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(_Bool)arg4;
@property(nonatomic, getter=isCurrentUser) _Bool currentUser;
- (id)owner;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(_Bool)arg4;
- (id)init;

@end

