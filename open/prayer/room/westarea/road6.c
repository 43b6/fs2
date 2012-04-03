//open/prayer/room/westarea/road7.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;
int have=1;
int time=0; 
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
        �������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ������
        ͨ��Ʈ���Ĺ�֮�׵�"������". ʥ��̵�������˵ʥ��
        ���ڵĸ߼��ɲ��ǳ���������!!��˵��ֻ����˵��, ��
        ��������û������Ը���ȥһ��!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 1 */
        "south":__DIR__"road4",         //�ֵ�

        ]) );
        set("no_fight", 0);
        
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
    if( who->query_temp("metal/where") >=7 )
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
    ob=new("/open/prayer/obj/iron");
    have = 0;
    ob->move(who);
    message_vision("[36mһ���ھ�֮��, �����ڳ�����һ��[����]!![0m\n", who);
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
