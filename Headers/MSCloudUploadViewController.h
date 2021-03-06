//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudViewController.h"

@class NSButton, NSSecureTextField, NSTextField, NSView;

@interface MSCloudUploadViewController : MSCloudViewController
{
    unsigned long long _state;
    NSButton *_openButton;
    NSButton *_uploadButton;
    NSView *_existingUploadView;
    NSView *_uploadView;
    NSView *_visibleView;
    NSSecureTextField *_updatePasswordField;
    NSTextField *_updatePasswordPlaceholder;
}

@property(retain, nonatomic) NSTextField *updatePasswordPlaceholder; // @synthesize updatePasswordPlaceholder=_updatePasswordPlaceholder;
@property(retain, nonatomic) NSSecureTextField *updatePasswordField; // @synthesize updatePasswordField=_updatePasswordField;
@property(nonatomic) __weak NSView *visibleView; // @synthesize visibleView=_visibleView;
@property(retain, nonatomic) NSView *uploadView; // @synthesize uploadView=_uploadView;
@property(retain, nonatomic) NSView *existingUploadView; // @synthesize existingUploadView=_existingUploadView;
@property(retain, nonatomic) NSButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) NSButton *openButton; // @synthesize openButton=_openButton;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)showPreferences:(id)arg1;
- (void)updateExistingShare:(id)arg1;
- (void)createNewShare:(id)arg1;
- (void)openShare:(id)arg1;
- (void)userAccountStatusDidChange;
- (void)documentCloudShareDidChangeNotification:(id)arg1;
- (void)cloudControllerDidChangeUploadingNotification:(id)arg1;
- (unsigned long long)defaultState;
- (void)setCloudController:(id)arg1;
- (void)viewWillAppear;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

