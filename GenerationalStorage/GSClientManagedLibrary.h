//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GenerationalStorage/GSLibraryProtocol-Protocol.h>

@class GSTemporaryStorage, NSString;
@protocol GSAdditionStoring;

__attribute__((visibility("hidden")))
@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol>
{
    GSTemporaryStorage *_ts;
}

- (_Bool)generationsRemove:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *nameSpace;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage;

@end

