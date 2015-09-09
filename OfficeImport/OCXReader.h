//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader : OCDEncryptedReader
{
    OCPZipPackage *mZipPackage;
}

@property(retain, nonatomic) OCPZipPackage *zipPackage; // @synthesize zipPackage=mZipPackage;
- (id)read;
- (_Bool)start;
- (void)restartReaderToUseDecryptedDocument;
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;
- (_Bool)isBinaryReader;
- (_Bool)verifyFileFormat;
- (void)dealloc;

@end

