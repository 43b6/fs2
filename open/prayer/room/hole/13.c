///open/prayer/room/hole/13.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;

int have=1;
int time=0;

void create()
{
        set("short", "��Ѩ");
        set("long", @LONG

        ��ͻȻ��ʼҡҡ�λΣ�վҲվ���ȵ��ڵ��ϣ���??����
        ��??��ȻԶ������ħ�޵���Х��"�������ء�!!"������
        ��¡!!��¡!!��~~!!��ʲô���ޣ�����·�����������
        ��??

LONG    );
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/crab-ox" : 1,              
   "/open/prayer/npc/evil-tiger" : 1,           
]));
        set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"15",
  "west":__DIR__"11",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
        setup();
}

void init()
{
    add_action("search_here", "search");
    add_action("dig_it","dig");
}

int search_here(string arg)
{
    object who=this_player();
    if( who->query_temp("metal/where",7) )
      write("����������������ô���, ���ڷ�����һ���ھ���ĺۼ�..\n"+
      "���ڿ� (dig) ��!! ˵���������ڳ�ʲô������Ү!!\n");
      else
      write("���ڸ���ѽ??\n");
    return 1;
}

int dig_it(string arg)
{
    object who,ob;
    who = this_player();
    if( who->query_temp("metal/where",7)  )
    {
    ob=new("/open/prayer/obj/silver");
    have = 0;
    ob->move(who);
    message_vision("[36mһ���ھ�֮��, �����ڳ�����һ������!![0m\n", who);
    who->delete_temp("metal/where");
    return 1;
    }
    return 0;
}   
void heart_beat()
{
 time++;
 if( time > 6000)
 {
   time=0;
   have=1;
  }
  return;
}   
