//open/prayer/room/hole/21.c

#include <room.h>
#include "/open/open.h"
inherit ROOM;
int have = 1;
int time = 0;
 
void create()
{
       set ("short", "������");
       set ("long", @LONG
	Ѫ��֮�����ſ���վ����ʯ�£�ʯ��������������ͬ������!!Ѫ
	���е�Ұ�������﷭����һֱ��Ҫ����˺�ѣ������ϵ�������Ϊ
	�����������Ȼ���죬��İ�ȫ���⣬Խ��ԽΣ����.....
LONG);
  	set("exits", ([ /* sizeof() == 1 */
	"up" : __DIR__"20",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
	"/open/prayer/npc/kylin" : 1,
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}

void init()
{
	add_action("search_here", "search");
    	add_action("take_it","take");
}

int search_here(string arg)
{
	if( (this_player()->query("combat_exp",1) > 100000) && have)
   write("����������ѽ����, �ҵ��˿��ز����˿���, �������һֻ\n"+
         "����İ�ˮ��....�����Ҫ��������(take it).\n");
    else
   write("Ҳ������ļ���̫��, �Ҳ������ŵĿ���...\n");
    return 1;
}
int take_it(string arg)
{
    object user,ob;
    user = this_player();
    if( this_player()->query_temp("can_take") && have)
    {
    ob=new("/open/prayer/obj/crystal1");
    have = 0;
    ob->move(this_player());
    message_vision("��$N����ˮ����ʯ���г����, ֻ��Ѫ����һ����!!\n"+
                   "���ƺ���������ˮ����������ѹ�ȸ�",user);
    user->set("quests/white-crystal",1);
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
