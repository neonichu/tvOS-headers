//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSCoderData-Protocol.h>

@class NSData;

@interface CSDecoder : NSObject <CSCoderData>
{
    const struct __CFAllocator *_contentDeallocator;
    NSData *_data;
    CDStruct_b7fac349 _obj;
}

@property(readonly, nonatomic) CDStruct_b7fac349 obj; // @synthesize obj=_obj;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) const struct __CFAllocator *contentDeallocator; // @synthesize contentDeallocator=_contentDeallocator;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)decodeObjectNoCopy:(CDStruct_b7fac349)arg1;
- (id)decodeObject:(CDStruct_b7fac349)arg1;
- (id)initWithData:(id)arg1 obj:(CDStruct_b7fac349)arg2;
- (id)initWithData:(id)arg1;

@end

