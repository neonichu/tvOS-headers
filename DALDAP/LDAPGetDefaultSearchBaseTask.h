//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DALDAP/LDAPTask.h>

@class NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask
{
    NSString *_defaultNamingContext;
}

@property(retain, nonatomic) NSString *defaultNamingContext; // @synthesize defaultNamingContext=_defaultNamingContext;
- (void).cxx_destruct;
- (id)daLevelErrorForLDAPError:(int)arg1;
- (int)numDownloadedElements;
- (void)finishWithError:(id)arg1;
- (void)performTask;
- (void)_performQuery;

@end

