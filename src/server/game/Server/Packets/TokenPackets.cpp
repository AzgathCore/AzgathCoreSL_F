/*
 * Copyright 2023 AzgathCore
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "TokenPackets.h"

void WorldPackets::Token::CommerceTokenGetLog::Read()
{
    _worldPacket >> UnkInt;
}

WorldPacket const* WorldPackets::Token::CommerceTokenGetLogResponse::Write()
{
    _worldPacket << UnkInt;
    _worldPacket << Result;
    _worldPacket << uint32(AuctionableTokenAuctionableList.size());
    for (AuctionableTokenAuctionable const& auctionableTokenAuctionable : AuctionableTokenAuctionableList)
    {
        _worldPacket << auctionableTokenAuctionable.UnkInt1;
        _worldPacket << auctionableTokenAuctionable.UnkInt2;
        _worldPacket << auctionableTokenAuctionable.Owner;
        _worldPacket << auctionableTokenAuctionable.BuyoutPrice;
        _worldPacket << auctionableTokenAuctionable.EndTime;
    }

    return &_worldPacket;
}

void WorldPackets::Token::CommerceTokenGetMarketPrice::Read()
{
    _worldPacket >> UnkInt;
}

WorldPacket const* WorldPackets::Token::CommerceTokenGetMarketPriceResponse::Write()
{
    _worldPacket << CurrentMarketPrice;
    _worldPacket << UnkInt;
    _worldPacket << Result;
    _worldPacket << AuctionDuration;

    return &_worldPacket;
}

void WorldPackets::Token::ConsumableTokenCanVeteranBuy::Read()
{
    _worldPacket >> UnkInt; // always 0
}


WorldPacket const* WorldPackets::Token::ConsumableTokenCanVeteranBuyResponse::Write()
{
    _worldPacket << UnkLong; // always 0
    _worldPacket << UnkInt; // always 0
    _worldPacket << UnkInt2; // always 1

    return &_worldPacket;
}
