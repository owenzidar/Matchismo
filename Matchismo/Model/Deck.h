//
//  Deck.h
//  Matchismo
//
//  Created by Owen Zidar on 1/8/14.
//  Copyright (c) 2014 Owen Zidar. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
