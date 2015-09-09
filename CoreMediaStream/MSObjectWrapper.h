//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCoding, NSObject><NSCoding;

@interface MSObjectWrapper : NSObject
{
    long long _size;
    long long _uniqueID;
    id <NSObject><NSCoding> _object;
    int _errorCount;
}

+ (id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2;
+ (id)objectsFromWrappers:(id)arg1;
+ (long long)indexOfObject:(id)arg1 inWrapperArray:(id)arg2;
+ (id)wrapperWithObject:(id)arg1 size:(long long)arg2;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, nonatomic) id <NSCoding> object; // @synthesize object=_object;
@property(nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) long long size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 size:(long long)arg2;

@end

