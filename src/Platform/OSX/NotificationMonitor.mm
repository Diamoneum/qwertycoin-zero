// Copyright (c) 2015-2017, The Bytecoin developers
// Copyright (c) 2017-2018, The Karbo developers
// Copyright (c) 2019, The Qwertycoin developers
// Copyright (c) 2020-2021, The Diamoneum developers
//
// This file is part of Diamoneum.
//
// Diamoneum is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Diamoneum is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Diamoneum.  If not, see <http://www.gnu.org/licenses/>.

#import "NotificationMonitor.h"
#import "INotificationMonitorObserver.h"
#import <Foundation/NSDistributedNotificationCenter.h>

@implementation NotificationMonitor
-(id) init: (WalletGui::INotificationMonitorObserver*) observer {
  m_observer = observer;
  NSDistributedNotificationCenter * center
    = [NSDistributedNotificationCenter defaultCenter];

  [center addObserver: self
          selector:    @selector(receive:)
          name:        @"com.apple.screenIsLocked"
          object:      nil
  ];
  [center addObserver: self
          selector:    @selector(receive:)
          name:        @"com.apple.screenIsUnlocked"
          object:      nil
  ];
  return self;
}
-(void) receive: (NSNotification*) notification {
  m_observer->notify(QString::fromNSString([notification name]));
}
@end
