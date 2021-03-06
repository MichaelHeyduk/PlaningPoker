//
//  CardSymbol.h
//  PlaningPoker
//
//  Created by Junglas Bodo on 14.08.11.
//  Copyright 2011 ObjectCode GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CardSymbol : NSObject {
    @private
    UIImage *_symbol;    
}

+ (CardSymbol *)withNamed:(NSString *)name;
+ (CardSymbol *)withImage:(UIImage *)image;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)imageWithSize:(CGFloat)size color:(UIColor *)color;
- (UIImage *)imageWithSize:(CGFloat)size color:(UIColor *)color shadowOffset:(CGSize)shadowOffset shadowColor:(UIColor *)shadowColor;

@end
