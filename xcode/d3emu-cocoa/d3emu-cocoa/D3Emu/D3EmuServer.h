#import <Foundation/Foundation.h>

#include "Net/Packet.h"

@class D3EmuServer;

@protocol D3EmuServerDelegate <NSObject>

@optional

- (BOOL)server:(D3EmuServer *)server didReceivePacket:(const char *)packet length:(int)length;
- (void)server:(D3EmuServer *)server didHandlePacketRequest:(d3emu::PacketRequest *)request 
    withPacketResponse:(d3emu::PacketResponse *)response;

@end

@interface D3EmuServer : NSObject {
@private
    int _socket;
    BOOL _alive;
}

@property (assign) id<D3EmuServerDelegate> delegate;
@property (nonatomic, retain) NSString *host;
@property (nonatomic, retain) NSString *port;

- (id)initWithHost:(NSString *)host port:(NSString *)port;
- (void)run;

@end