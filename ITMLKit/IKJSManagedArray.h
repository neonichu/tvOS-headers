//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IKJSManagedArray : NSObject
{
    id _ownerObject;
    NSArray *_managedArray;
}

@property(retain, nonatomic) NSArray *managedArray; // @synthesize managedArray=_managedArray;
@property(retain, nonatomic) id ownerObject; // @synthesize ownerObject=_ownerObject;
- (void).cxx_destruct;
- (id)jsValuesWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithArray:(id)arg1 ownerObject:(id)arg2;

@end

