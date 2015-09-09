//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensions/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface DEAttachmentItem : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSURL *_path;
    NSDate *_modificationDate;
    NSNumber *_filesize;
    NSNumber *_shouldCompress;
    NSURL *_attachedPath;
    NSString *_attachmentType;
    NSNumber *_deleteOnAttach;
}

+ (id)attachmentWithPathURL:(id)arg1;
+ (id)attachmentWithPath:(id)arg1;
+ (id)newAttachmentWithPath:(id)arg1;
+ (id)attachmentWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *deleteOnAttach; // @synthesize deleteOnAttach=_deleteOnAttach;
@property(copy, nonatomic) NSString *attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) NSURL *attachedPath; // @synthesize attachedPath=_attachedPath;
@property(retain, nonatomic) NSNumber *shouldCompress; // @synthesize shouldCompress=_shouldCompress;
@property(retain, nonatomic) NSNumber *filesize; // @synthesize filesize=_filesize;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSURL *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)writeAssetToDiskWithURL:(id)arg1 toDirectory:(id)arg2;
- (id)description;
- (void)detach;
- (id)attachWithDestinationDir:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;
- (id)initWithPathURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

