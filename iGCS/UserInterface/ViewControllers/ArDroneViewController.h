//
//  ArDroneViewController.h
//  iGCS
//
//  Created by David Leskowicz on 10/21/14.
//
//

#import <UIKit/UIKit.h>
#import "ArDroneUtils.h"

@interface ArDroneViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>

@property (nonatomic, strong) ArDroneUtils *arDrone2;

@end
