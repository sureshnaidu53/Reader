//
//	ReaderViewController.h
//	Reader
//
//	Created by Julius Oklamcak on 2010-09-01.
//	Copyright © 2010 Julius Oklamcak. All rights reserved.
//
//	This work is being made available under a Creative Commons Attribution license:
//		«http://creativecommons.org/licenses/by/3.0/»
//	You are free to use this work and any derivatives of this work in personal and/or
//	commercial products and projects as long as the above copyright is maintained and
//	the original author is attributed.
//

#import <UIKit/UIKit.h>
#import "PDFViewController.h"

@class PDFViewTiled, UIViewFader;

@interface ReaderViewController : PDFViewController
{
@private // Instance variables

	UIView *theNavbar;
	UIViewFader *navbarFader;
	UISlider *theSlider;

	UIToolbar *theToolbar;
	UIViewFader *toolbarFader;
	UILabel *theLabel;
}

@property (nonatomic, retain) NSURL *openURL;

@end
