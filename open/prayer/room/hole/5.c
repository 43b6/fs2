///open/prayer/room/hole/5.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;
int have=1;
int time=0;

void create()
{
        set("short", "��Ѩ");
        set("long", @LONG

        �����ڵ�ʯ���϶���Ұ�޵�צ�ۣ���մ��������Ѫ��!!
        Զ����ʱ��Ұ�޵Ľ��������ⶴ���ڻ��첻��.......��~
        !!Զ������һ��ҽ�������!!����ǰ�����˱����ˣ���
        ��Ũ�������������Ѽ���ָ��ֻҪ��һ�������ʱ�����
        ��Ұ�޵ĵ���......

LONG    );
        set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"7",
  "north":__DIR__"3",
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
    ob=new("/open/prayer/obj/gold");
    have = 0;
    ob->move(who);
    message_vision("[36mһ���ھ�֮��, �����ڳ�����һ����!![0m\n", who);
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
