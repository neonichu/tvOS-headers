//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class IKAppDocument, IKStyleMediaQuery, NSArray, NSDictionary, NSString;

@protocol IKAppDocumentDelegate <NSObject>
- (void)documentDidUpdate:(IKAppDocument *)arg1;
- (void)documentNeedsUpdate:(IKAppDocument *)arg1;

@optional
- (_Bool)document:(IKAppDocument *)arg1 evaluateStyleMediaQuery:(IKStyleMediaQuery *)arg2;
- (NSArray *)impressionableViewElementsForDocument:(IKAppDocument *)arg1;
- (void)documentScrollToTop:(IKAppDocument *)arg1;
- (void)document:(IKAppDocument *)arg1 runTestWithName:(NSString *)arg2 options:(NSDictionary *)arg3;
@end

