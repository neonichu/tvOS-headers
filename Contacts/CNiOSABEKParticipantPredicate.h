//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNiOSABEKParticipantPredicate : CNPredicate <CNiOSContactPredicate>
{
    NSString *_name;
    NSURL *_URL;
    NSString *_emailAddress;
    NSString *_customDescription;
}

@property(copy, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 error:(struct __CFError **)arg5;
- (_Bool)cn_supportsNativeSorting;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(id)arg1 URL:(id)arg2 emailAddress:(id)arg3 customDescription:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

