//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSAssetLibrary.h"

@class MSFileMonitor, NSData;

@interface MSUserAssetLibrary : MSAssetLibrary
{
    MSFileMonitor *_fileMonitor;
    NSData *_bookmark;
}

@property(retain, nonatomic) NSData *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) MSFileMonitor *fileMonitor; // @synthesize fileMonitor=_fileMonitor;
- (void).cxx_destruct;
- (void)resolveLocationOnDisk;
- (void)startMonitoring;
- (void)loadAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)loadSynchronously;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isUserLibrary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAtURL:(id)arg1;

@end
