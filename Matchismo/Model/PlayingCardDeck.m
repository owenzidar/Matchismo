//
//  PlayingCardDeck.m
//  Matchismo
//
//  Created by Owen Zidar on 1/13/14.
//  Copyright (c) 2014 Owen Zidar. All rights reserved.
//

#import "PlayingCard.h"
#import "PlayingCardDeck.h"

@implementation PlayingCardDeck

- (instancetype)init
{
    self = [super init];
    
    if (self) {
        for (NSString *suit in [PlayingCard validSuits]) {
            for (NSUInteger rank = 1; rank <= [PlayingCard maxRank]; rank++) {
                PlayingCard *card = [[PlayingCard alloc]init];
                card.rank = rank;
                card.suit = suit;
                [self addCard:card];
            }
        }
    }
    return self;
}
@end
