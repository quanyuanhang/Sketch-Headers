//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudPreferencesViewController.h"

@class NSTextField;

@interface MSCloudPreferencesAccountViewController : MSCloudPreferencesViewController
{
    NSTextField *_initialsLabel;
    NSTextField *_nameLabel;
    NSTextField *_emailLabel;
}

@property(retain, nonatomic) NSTextField *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSTextField *initialsLabel; // @synthesize initialsLabel=_initialsLabel;
- (void).cxx_destruct;
- (void)showAccountSettings:(id)arg1;
- (void)logout:(id)arg1;
- (id)initialsForName:(id)arg1;
- (void)updateInitials;
- (void)updateUserData;
- (void)userDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear;
- (void)viewDidLoad;

@end

