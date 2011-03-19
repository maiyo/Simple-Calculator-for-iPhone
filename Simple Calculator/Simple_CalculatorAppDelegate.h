//
//  Simple_CalculatorAppDelegate.h
//  Simple Calculator
//
//  Created by Tim Green on 20/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Simple_CalculatorAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
