//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DiagnosticExtensions/NSObject-Protocol.h>

@class NSDictionary;

@protocol DEExtensionVendorProtocol <NSObject>
- (void)attachmentsForParameters:(NSDictionary *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)attachmentListWithHandler:(void (^)(NSArray *))arg1;
@end

