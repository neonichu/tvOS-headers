//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICSearchIndexableNoteContext.h>

@class NoteContext;

@interface ICLegacySearchIndexableNoteContext : ICSearchIndexableNoteContext
{
    _Bool _isMainContext;
    struct NoteContext *_noteContext;
}

@property(nonatomic) _Bool isMainContext; // @synthesize isMainContext=_isMainContext;
@property(nonatomic) __weak NoteContext *noteContext; // @synthesize noteContext=_noteContext;
- (void).cxx_destruct;
- (id)contextIdentifier;
- (id)initWithNoteContext:(struct NoteContext *)arg1 isMainContext:(_Bool)arg2;

@end

