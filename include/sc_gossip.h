/**
 * ScriptDev3 is an extension for mangos providing enhanced features for
 * area triggers, creatures, game objects, instances, items, and spells beyond
 * the default database scripting in mangos.
 *
 * Copyright (C) 2006-2013 ScriptDev2 <http://www.scriptdev2.com/>
 * Copyright (C) 2014-2025 MaNGOS <https://www.getmangos.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef SC_GOSSIP_H
#define SC_GOSSIP_H

#include "Player.h"
#include "GossipDef.h"
#include "QuestDef.h"

// Gossip Item Text
#define GOSSIP_TEXT_BROWSE_GOODS        "I'd like to browse your goods."
#define GOSSIP_TEXT_TRAIN               "Train me!"

#define GOSSIP_TEXT_BANK                "The bank"
#define GOSSIP_TEXT_IRONFORGE_BANK      "The bank of Ironforge"
#define GOSSIP_TEXT_STORMWIND_BANK      "The bank of Stormwind"
#define GOSSIP_TEXT_WINDRIDER           "The wind rider master"
#define GOSSIP_TEXT_GRYPHON             "The gryphon master"
#define GOSSIP_TEXT_BATHANDLER          "The bat handler"
#define GOSSIP_TEXT_HIPPOGRYPH          "The hippogryph master"
#define GOSSIP_TEXT_ZEPPLINMASTER       "The zeppelin master"
#define GOSSIP_TEXT_DEEPRUNTRAM         "The Deeprun Tram"
#define GOSSIP_TEXT_FERRY               "The Rut'theran Ferry"
#define GOSSIP_TEXT_FLIGHTMASTER        "The flight master"
#define GOSSIP_TEXT_AUCTIONHOUSE        "The auction house"
#define GOSSIP_TEXT_GUILDMASTER         "The guild master"
#define GOSSIP_TEXT_INN                 "The inn"
#define GOSSIP_TEXT_MAILBOX             "The mailbox"
#define GOSSIP_TEXT_STABLEMASTER        "The stable master"
#define GOSSIP_TEXT_WEAPONMASTER        "The weapon master"
#define GOSSIP_TEXT_OFFICERS            "The officers' lounge"
#define GOSSIP_TEXT_BATTLEMASTER        "The battlemaster"
#define GOSSIP_TEXT_BARBER              "Barber"
#define GOSSIP_TEXT_CLASSTRAINER        "A class trainer"
#define GOSSIP_TEXT_PROFTRAINER         "A profession trainer"
#define GOSSIP_TEXT_LEXICON             "Lexicon of Power"

#define GOSSIP_TEXT_ALTERACVALLEY       "Alterac Valley"
#define GOSSIP_TEXT_ARATHIBASIN         "Arathi Basin"
#define GOSSIP_TEXT_WARSONGULCH         "Warsong Gulch"
#define GOSSIP_TEXT_ARENA               "Arena"
#define GOSSIP_TEXT_EYEOFTHESTORM       "Eye of The Storm"
#define GOSSIP_TEXT_STRANDOFANCIENT     "Strand of the Ancients"

#define GOSSIP_TEXT_DEATH_KNIGHT        "Death Knight"
#define GOSSIP_TEXT_DRUID               "Druid"
#define GOSSIP_TEXT_HUNTER              "Hunter"
#define GOSSIP_TEXT_PRIEST              "Priest"
#define GOSSIP_TEXT_ROGUE               "Rogue"
#define GOSSIP_TEXT_WARRIOR             "Warrior"
#define GOSSIP_TEXT_PALADIN             "Paladin"
#define GOSSIP_TEXT_SHAMAN              "Shaman"
#define GOSSIP_TEXT_MAGE                "Mage"
#define GOSSIP_TEXT_WARLOCK             "Warlock"

#define GOSSIP_TEXT_ALCHEMY             "Alchemy"
#define GOSSIP_TEXT_BLACKSMITHING       "Blacksmithing"
#define GOSSIP_TEXT_COOKING             "Cooking"
#define GOSSIP_TEXT_ENCHANTING          "Enchanting"
#define GOSSIP_TEXT_ENGINEERING         "Engineering"
#define GOSSIP_TEXT_FIRSTAID            "First Aid"
#define GOSSIP_TEXT_HERBALISM           "Herbalism"
#define GOSSIP_TEXT_LEATHERWORKING      "Leatherworking"
#define GOSSIP_TEXT_TAILORING           "Tailoring"
#define GOSSIP_TEXT_MINING              "Mining"
#define GOSSIP_TEXT_FISHING             "Fishing"
#define GOSSIP_TEXT_SKINNING            "Skinning"
#define GOSSIP_TEXT_JEWELCRAFTING       "Jewelcrafting"
#define GOSSIP_TEXT_INSCRIPTION         "Inscription"

// Enumeration for trade skills and levels
enum
{
    // Skill defines
    TRADESKILL_ALCHEMY             = 1,
    TRADESKILL_BLACKSMITHING       = 2,
    TRADESKILL_COOKING             = 3,
    TRADESKILL_ENCHANTING          = 4,
    TRADESKILL_ENGINEERING         = 5,
    TRADESKILL_FIRSTAID            = 6,
    TRADESKILL_HERBALISM           = 7,
    TRADESKILL_LEATHERWORKING      = 8,
    TRADESKILL_POISONS             = 9,
    TRADESKILL_TAILORING           = 10,
    TRADESKILL_MINING              = 11,
    TRADESKILL_FISHING             = 12,
    TRADESKILL_SKINNING            = 13,
    TRADESKILL_JEWLCRAFTING        = 14,
    TRADESKILL_INSCRIPTION         = 15,

    // Skill levels
    TRADESKILL_LEVEL_NONE          = 0,
    TRADESKILL_LEVEL_APPRENTICE    = 1,
    TRADESKILL_LEVEL_JOURNEYMAN    = 2,
    TRADESKILL_LEVEL_EXPERT        = 3,
    TRADESKILL_LEVEL_ARTISAN       = 4,
    TRADESKILL_LEVEL_MASTER        = 5,
    TRADESKILL_LEVEL_GRAND_MASTER  = 6,

    // Gossip defines
    GOSSIP_ACTION_TRADE            = 1,
    GOSSIP_ACTION_TRAIN            = 2,
    GOSSIP_ACTION_TAXI             = 3,
    GOSSIP_ACTION_GUILD            = 4,
    GOSSIP_ACTION_BATTLE           = 5,
    GOSSIP_ACTION_BANK             = 6,
    GOSSIP_ACTION_INN              = 7,
    GOSSIP_ACTION_HEAL             = 8,
    GOSSIP_ACTION_TABARD           = 9,
    GOSSIP_ACTION_AUCTION          = 10,
    GOSSIP_ACTION_INN_INFO         = 11,
    GOSSIP_ACTION_UNLEARN          = 12,
    GOSSIP_ACTION_INFO_DEF         = 1000,

    GOSSIP_SENDER_MAIN             = 1,
    GOSSIP_SENDER_INN_INFO         = 2,
    GOSSIP_SENDER_INFO             = 3,
    GOSSIP_SENDER_SEC_PROFTRAIN    = 4,
    GOSSIP_SENDER_SEC_CLASSTRAIN   = 5,
    GOSSIP_SENDER_SEC_BATTLEINFO   = 6,
    GOSSIP_SENDER_SEC_BANK         = 7,
    GOSSIP_SENDER_SEC_INN          = 8,
    GOSSIP_SENDER_SEC_MAILBOX      = 9,
    GOSSIP_SENDER_SEC_STABLEMASTER = 10
};

/**
 * @brief Gets the skill level of a player for a specific skill.
 * @param pPlayer Pointer to the player.
 * @param uiSkill Skill ID.
 * @return Skill level of the player.
 */
extern uint32 GetSkillLevel(Player* pPlayer, uint32 uiSkill);

// Defined functions to use with player.

// This function adds a menu item,
// Icon Id
// Text
// Sender (this is to identify the current Menu with this item)
// Option id (identifies this Menu Item)
// Text to be displayed in pop up box
// Money value in pop up box
// Coded
#define ADD_GOSSIP_ITEM(uiIcon, chrText, uiSender, uiOptionId)   PlayerTalkClass->GetGossipMenu().AddMenuItem(uiIcon, chrText, uiSender, uiOptionId, "", 0)
#define ADD_GOSSIP_ITEM_ID(uiIcon, iTextId, uiSender, uiOptionId)   PlayerTalkClass->GetGossipMenu().AddMenuItem(uiIcon, iTextId, uiSender, uiOptionId, 0, 0)

#if defined (CLASSIC)
#define ADD_GOSSIP_ITEM_EXTENDED(uiIcon, chrText, uiSender, uiOptionId, chrBoxMessage, uiBoxMoney, bCode)   PlayerTalkClass->GetGossipMenu().AddMenuItem(uiIcon, chrText, uiSender, uiOptionId, chrBoxMessage, /*uiBoxMoney,*/ bCode)
#else
#define ADD_GOSSIP_ITEM_EXTENDED(uiIcon, chrText, uiSender, uiOptionId, chrBoxMessage, uiBoxMoney, bCode)   PlayerTalkClass->GetGossipMenu().AddMenuItem(uiIcon, chrText, uiSender, uiOptionId, chrBoxMessage, uiBoxMoney, bCode)
#endif

// This function sends the current menu to show to client
// uiTextId - NPCTEXTID (uint32)
// guid - npc guid (ObjectGuid)
#define SEND_GOSSIP_MENU(uiTextId, guid)      PlayerTalkClass->SendGossipMenu(uiTextId, guid)

// Clears the Menu
#define CLEAR_GOSSIP_MENU()        PlayerTalkClass->ClearMenus()

// Closes the Menu
#define CLOSE_GOSSIP_MENU()        PlayerTalkClass->CloseGossip()

// Functions to send NPC lists
// a - is always the npc guid (ObjectGuid)
#define SEND_VENDORLIST(a)         GetSession()->SendListInventory(a)
#define SEND_TRAINERLIST(a)        GetSession()->SendTrainerList(a)
#define SEND_BANKERLIST(a)         GetSession()->SendShowBank(a)
#define SEND_TABARDLIST(a)         GetSession()->SendTabardVendorActivate(a)
#define SEND_TAXILIST(a)           GetSession()->SendTaxiStatus(a)

#endif
