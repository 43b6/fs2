//open/prayer/room/kiyan/1.c

#include <room.h>
#include "/open/open.h"

inherit ROOM;
int have=1;
int time=0;
 
void create()
{
        set("short","�����ķ���");
        set("long",@LONG

        �����ķ���һ�ۿ�ȥ�ǳ������룬ԭ���Ƿ����ڵİ�\��ʵ����̫��
        �ˣ�ֻ��һ��СС��ľ�崲!!�����Ϲ���һ�ں�ɫ��ǵĶ̽�!!��
        ����һ��СС��ӬͷС�֣���֪�����Լ���ѧ�̶�̫�����ô��
        �����ǿ�������дЩʲô??

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south":__DIR__"4",             //����
]) );
        set("no_fight", 0);
        set("light_up", 1);
  setup();
}

void init()
{
    add_action("search_here", "search");
    add_action("take_it","take");
}

int search_here(string arg)
{
    if( (this_player()->query("combat_exp",1) > 100000)  && have)
      write("�㳯ǽ����ѽ����,������ڱ���ʵ���Ƿǳ���Ư����߹�.����͵͵����..\n"+
               "�㵨��һ��,����Ҫ��������(take it).\n");
    else
       write("Ҳ������ĵ��Ӳ�����,�㲻�Ҷ���ڱ���������˼...\n");
    return 1;
}
int take_it(string arg)
{
    object user,ob;
    user = this_player();
    if( this_player()->query("quests/girlsword",1) && !present("Red-sword",user) )
    {
    ob=new("/open/prayer/obj/sword");
    have = 0;
    ob->move(this_player());
    message_vision("[36m��$N��[32m����[36m�����,ֻ������[33m��������[36m.........��!!һ���ϺõĽ�Ү!![0m\n", user);
    return 1;
    }
    return 0;
}   
void heart_beat()
{
 time++;
 if( time > 3000)
 {
   time=0;
   have=1;
  }
  return;
}   
