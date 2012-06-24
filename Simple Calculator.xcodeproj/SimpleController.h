//
//  SimpleController.h
//  Simple Calculator
//
//  Created by Tim Green on 20/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SimpleController : NSObject {
@private
    
    IBOutlet NSTextField *numOne;
    IBOutlet NSTextField *numTwo;
    IBOutlet NSTextField *answer;
}

-(IBAction)Calculate:(id)sender;

@end
