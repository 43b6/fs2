#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short","����������");
  set ("long", @LONG
����ط����ܵ�����ף�����������������㣬����һ�Ѻ���һ���Ŀ������
����������ƴ�������������������ϰ�������������Եط��ˣ��Ͽ��ó��������
����Щ������һ�������ɣ�ϣ�������ճ�Ϊ����ռ����һ��������
                                                          ������ʦȺ����
LONG);

  set("objects", ([ /* sizeof() == 1 */
      "/open/start/npc/protectman" : 1,
]));
  set("exits", ([ /* sizeof() == 5 */
  "north" : __DIR__"newhand2.c",
  "south" : __DIR__"newhand8.c",
  "east" : __DIR__"newhand6.c",
  "west" : __DIR__"newhand4.c",
  "out" : "/open/trans/room/room4.c",
  
]));
  set("no_transmit", 1);
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);

  setup();
}
int valid_leave(object who, string dir)
{
	if (dir == "out")
	{
		if(who->query("combat_exp")>20000)
		{
		  message_vision( HIY"\n����ȡ��$N���϶���ľ���ֵ!!\n"NOR,who); 
	          who->set("combat_exp",20001);
	        }
        }
        return :: valid_leave(who,dir);
}