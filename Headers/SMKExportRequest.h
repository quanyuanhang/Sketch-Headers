//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SMKExportRequest : NSObject <NSCopying>
{
    NSString *_artboardID;
    double _scale;
    struct CGSize _constrainingSize;
    struct CGRect _rect;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize constrainingSize; // @synthesize constrainingSize=_constrainingSize;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(copy, nonatomic) NSString *artboardID; // @synthesize artboardID=_artboardID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *stringValue;
- (id)initWithStringValue:(id)arg1;
- (id)initWithURLRequest:(id)arg1;

@end

