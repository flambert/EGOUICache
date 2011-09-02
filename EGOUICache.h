//
//  EGOUICache.h
//  EGOUICache
//
//  Created by Shaun Harrison on 12/29/09.
//  Copyright (c) 2009-2010 enormego
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>

UIImage* EGOUICachedDrawing(id target, SEL selector, CGRect rect, NSString* salt);
UIImage* EGOUICachedDrawingWithTimeoutInterval(id target, SEL selector, CGRect rect, NSString* salt, NSTimeInterval timeoutInterval);

// Should be called from the method calling EGOUICachedDrawing, cancels 1 level 
void EGOUICacheCancel(void);

// Sets the maximum length the cache will persist for.
// Important: This does not guarantee cache will persist for this period, since caches can be cleared at any time.
void EGOUICacheSetCacheTimeoutInterval(NSTimeInterval cacheTimeoutInterval);

// Convenience methods for EGOUICacheSetCacheTimeoutInterval
void EGOUICacheSetCacheTimeoutOneYear(void);
void EGOUICacheSetCacheTimeoutOneMonth(void);
void EGOUICacheSetCacheTimeoutOneWeek(void);
void EGOUICacheSetCacheTimeoutOneDay(void);
void EGOUICacheSetCacheTimeoutOneHour(void);