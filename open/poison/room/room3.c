// Room: /open/poison/room/room3
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�Ի�");
  set ("long", @LONG
����һ�����˵ļң�ǽ���Ϲ���һ��������ϸ�Ĵ󹭣�
�Ա߷���һͲ��β�����������������˵ı����ض���ǿ��
�����������й���һ�Ŵ��׻�Ƥ����������м��ž������
�Σ���һ���൱�徻�ķ��䡣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room2",
  "south" : __DIR__"road3",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/hunter" : 1,
]));

  setup();
}

int valid_leave(object me, string dir)
{
	object who;
	if ( dir == "west" && who = present("hunter", environment(me)) )
	     if(me->query("class") != "poisoner")
		return notify_fail(HIC"����ŭ������˽����լѽ!!\n"NOR);
	return ::valid_leave(me, dir);
}
