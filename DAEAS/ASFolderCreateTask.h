//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASFolderLocalUpdateTask.h>

@interface ASFolderCreateTask : ASFolderLocalUpdateTask
{
}

- (long long)taskStatusForExchangeStatus:(int)arg1;
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1;
- (id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

