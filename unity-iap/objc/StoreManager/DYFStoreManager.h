//
//  DYFStoreManager.h
//
//  Created by chenxing on 2014/11/4. ( https://github.com/chenxing640/Unity-iOS-InAppPurchase )
//  Copyright © 2014 chenxing. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <UIKit/UIKit.h>

@interface DYFStoreManager : NSObject

/** Constructs a store manager singleton with class method.
 */
+ (instancetype)shared;

/** Adds a store observer.
 */
- (void)addStoreObserver;

/** Removes a store observer.
 */
- (void)removeStoreObserver;

/** Requests payment of the product with the given product identifier.
 */
- (void)addPayment:(NSString *)productIdentifier;

/** Requests payment of the product with the given product identifier, an opaque identifier for the user’s account on your system.
 */
- (void)addPayment:(NSString *)productIdentifier userIdentifier:(NSString *)userIdentifier;

/** Requests to restore previously completed transactions.
 */
- (void)restoreTransactions;

/** Requests to restore previously completed transactions with an opaque identifier for the user’s account on your system.
 */
- (void)restoreTransactions:(NSString *)userIdentifier;

/** Requests to refresh the App Store receipt in case the receipt is invalid or missing.
 */
- (void)refreshReceipt;

/** Queries those incompleted transactions from keychain.
 */
- (void)queryIncompletedTransactions;

@end
