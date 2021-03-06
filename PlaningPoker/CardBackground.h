//
//  CardBackground.h
//  PlaningPoker
//
//  Created by Junglas Bodo on 12.08.11.
//  Copyright 2011 ObjectCode GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CardBackground

@property (nonatomic, readonly) BOOL inverted;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *shadowColor;

- (UIImage *) normal:(CGSize) size cardValue:(id)cardValue;
- (UIImage *) hidden:(CGSize) size;

@end
