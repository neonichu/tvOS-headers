//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPersistenceManager : NSObject
{
}

+ (_Bool)phoneNumberMuidMappingFileExistsAtPath:(id)arg1;
+ (_Bool)writePhoneNumberMuidMappingForMapping:(id)arg1 uniquePhoneNumbers:(id)arg2 toPath:(id)arg3 error:(id *)arg4;
+ (_Bool)readPhoneNumberMuidMapping:(id *)arg1 uniquePhoneNumbers:(id *)arg2 version:(id *)arg3 atPath:(id)arg4 error:(id *)arg5;
+ (_Bool)readPhoneNumberMuidMapping:(id *)arg1 uniquePhoneNumbers:(id *)arg2 atPath:(id)arg3 error:(id *)arg4;
+ (_Bool)createMuidMappingDirectoryForPath:(id)arg1 WithError:(id *)arg2;

@end

