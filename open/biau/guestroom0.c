// Room: /u/o/onion/room/r_room1.c

inherit ROOM;

void create()
{
	set("short", "�ھֿͷ�");
	set("long", @LONG
һ��ɸɾ����Ŀͷ�,��������һ��ҳ���û��,��֪��ɨ����������Ƕ��������.
�ͷ��ﻹ����һ�ŵ񹤾����ĺ����,��ͷ�ϵ����������,��β����ˮ������,��
���������ͷ����������,��ش��ھֵ����ƺ������ж����...
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room3",
]));
	set("valid_startroom", "1");

	setup();
}
