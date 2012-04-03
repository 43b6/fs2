// Room: /open/badman/room/lake3.c
// written by powell 96.4.26@FS

#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������Ƕ��˺��ĺ��ף�����������һ���ɫ��Сʯ�ӣ���ȫ 
û������Ĵ��ڣ�Ҳ�ѹ����ˮ����ô�峺���������ǰ���п��
ʯͷƽ���ں��ڱߣ����⻹�ɿ�һ�ÿõ�ˮ������ˮ��ҡ��ҡȥ��
ɷ����Ȥ��
                                                        
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "rock" : "һ�ž޴��ʯͷ����֪���Ƿ��Ķ�����
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"lake2",
]));
  set("objects", ([ /* sizeof() == 1 */
  BAD_NPC"octopus.c" : 1,
]));

  setup();
}

void init()
{
	add_action("do_move","move");
}

int do_move(string arg)
{
	object who = this_player(), ob = this_object();
   	if ( arg == "rock" ) {
        if ( ob ->query_temp("way") != 1 ) {
	message_vision("$N��������ʯһ�ƣ���Ȼʯ����������������������ǰ���Ǹ�
			\r��խ��ͨ����\n",who);
	add("exits/enter",__DIR__"lake4");
	ob->set_temp("way",1);
	}
	else {   
   	message_vision("$N��������ʯһ�ƣ��ֽ���ʯ�ƻ�ԭ���ĵط���\n",who);
 	delete("exits/enter");	
	ob->delete_temp("way");
	}
	return 1;
	}
	return notify_fail("����Ҫ�ƶ���ô����\n");
	return 1;
}
