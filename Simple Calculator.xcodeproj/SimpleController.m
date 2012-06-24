//
//  SimpleController.m
//  Simple Calculator
//
//  Created by Tim Green on 20/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "SimpleController.h"


@implementation SimpleController

-(IBAction)Calculate:(id)sender
{
    int result = [numOne intValue] + [numTwo intValue];
    [answer setIntValue:result];
}

@end
