//
//  AdMobBannerView.h
//  BTEndlessTunnel
//
//  Created by NSS on 4/8/14.
//
//

#import <UIKit/UIKit.h>
#import <GoogleMobileAds/GADBannerView.h>

@interface AdMobBannerView : UIViewController
{
    GADBannerView* bannerView_;
}

-(void)show;
-(void)hide;

@end
