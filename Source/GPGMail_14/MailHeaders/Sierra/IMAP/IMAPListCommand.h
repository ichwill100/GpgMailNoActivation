//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSDictionary, NSString;

@interface IMAPListCommand : IMAPSingleCommand
{
    NSString *_mailboxName;	// 8 = 0x8
    NSString *_referenceName;	// 16 = 0x10
    long long _options;	// 24 = 0x18
    NSDictionary *_listing;	// 32 = 0x20
    NSString *_separator;	// 40 = 0x28
}

@property(copy) NSString *separator; // @synthesize separator=_separator;
@property(copy) NSDictionary *listing; // @synthesize listing=_listing;
@property long long options; // @synthesize options=_options;
@property(copy) NSString *referenceName; // @synthesize referenceName=_referenceName;
@property(readonly, copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (void).cxx_destruct;	// IMP=0x000000000002f6b6
- (long long)maxAllowedConnectionState;	// IMP=0x000000000002f5fe
- (long long)minRequiredConnectionState;	// IMP=0x000000000002f5f3
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x000000000002f5d8
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x000000000002f2d7
- (BOOL)shouldSendAgainOnError;	// IMP=0x000000000002f2cc
- (id)activityString;	// IMP=0x000000000002f260
- (id)commandTypeString;	// IMP=0x000000000002f241
- (id)init;	// IMP=0x000000000002f172
- (id)initWithMailboxName:(id)arg1 options:(long long)arg2;	// IMP=0x000000000002f153
- (id)initWithMailboxName:(id)arg1 referenceName:(id)arg2 options:(long long)arg3;	// IMP=0x000000000002f07e

@end

