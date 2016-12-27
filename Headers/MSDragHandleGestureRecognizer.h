//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDragToMoveOrCopyGestureRecognizer.h"

@class NSAffineTransform;

@interface MSDragHandleGestureRecognizer : MSDragToMoveOrCopyGestureRecognizer
{
    NSAffineTransform *_curveAdjustmentLockingTransform;
    struct CGPoint _originalHandleLocation;
}

@property(copy, nonatomic) NSAffineTransform *curveAdjustmentLockingTransform; // @synthesize curveAdjustmentLockingTransform=_curveAdjustmentLockingTransform;
@property(nonatomic) struct CGPoint originalHandleLocation; // @synthesize originalHandleLocation=_originalHandleLocation;
- (void).cxx_destruct;
- (struct CGPoint)locationInLayer:(id)arg1;
- (void)setCenterForCurveAdjustmentLocking:(struct CGPoint)arg1 slope:(double)arg2;
@property(readonly, nonatomic) BOOL shouldSteadyCurveAdjustmentHandle;
- (void)reset;

@end

