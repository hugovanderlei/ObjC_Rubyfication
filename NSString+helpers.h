//
//  NSString+helpers.h
//  Rubyfication
//
//  Created by Fabio Akita on 1/30/11.
//  Copyright 2011 Gonow Tecnologia. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (helpers) {

}

- (NSString*) concat:(NSString*)anotherString;
- (NSString*) slice:(int)start;
- (NSString*) slice:(int)start until:(int)until;
- (NSString*) center:(int)length;
- (NSString*) center:(int)length withPad:(NSString*)padStr;
- (BOOL) isEmpty;
- (BOOL) end_with:(NSString*)anotherString;
- (int) index:(NSString*)str;
- (NSString*) insert:(NSString*)str at:(int)position;
- (NSString*) ljust:(int)length;
- (NSString*) ljust:(int)length withPad:(NSString*)padStr;
- (NSString*) reverse;

@end