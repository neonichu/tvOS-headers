//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface PKPassPresentationContext : NSObject
{
    _Bool _animated;
    _Bool _wasAutomaticallySelected;
    NSArray *_additionalPassUniqueIdentifiers;
}

+ (id)contextWithAnimation:(_Bool)arg1 wasAutomaticallySelected:(_Bool)arg2 additionalPassUniqueIdentifiers:(id)arg3;
+ (id)contextWithAnimation:(_Bool)arg1 additionalPassUniqueIdentifiers:(id)arg2;
+ (id)contextWithAnimation:(_Bool)arg1;
@property(nonatomic) _Bool wasAutomaticallySelected; // @synthesize wasAutomaticallySelected=_wasAutomaticallySelected;
@property(copy, nonatomic) NSArray *additionalPassUniqueIdentifiers; // @synthesize additionalPassUniqueIdentifiers=_additionalPassUniqueIdentifiers;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)description;
- (void)dealloc;

@end

