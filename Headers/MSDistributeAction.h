//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDocumentAction.h"

@interface MSDistributeAction : MSDocumentAction
{
}

- (void)distributeLayers:(id)arg1 withSpace:(double)arg2 forAxis:(unsigned long long)arg3 mayPlaceOnSubpixels:(BOOL)arg4;
- (double)calculateRequiredSpaceBetweenLayers:(id)arg1 forAxis:(unsigned long long)arg2;
- (id)layersSortedForAxis:(unsigned long long)arg1;
- (void)distributeAlongAxis:(unsigned long long)arg1;
- (void)performAction:(id)arg1;
- (BOOL)validate;
- (BOOL)useImageForTouchBarItem;

@end

