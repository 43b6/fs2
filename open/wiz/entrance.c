// Room: /open/wiz/entrance.c

#include <login.h>
inherit ROOM;

void create()
{
	set("short", "��ʦ�����");
	set("long", @LONG
��������ʦ���������ĵط����������ʲô���Ҫ����ʦ��֪����������
����������;������������Ƕ�����Ϸ�е����⣬������ȷ�������ṩ��˵��
�ļ���û��˵������������ʣ���ʦ����Ҫְ�𲢲��ǽ��������档
    �������Ǳ�Ȼ������, �����ص������ҳ����֮��, �����ǲ����ȵ�����,
��Ȼ, ����Ҫ������ҵ���ʧ, ������ɲ���ƽ����, �����������ʦ�ڳ���֤
�������� post ֮. ���������µ����, Ҳ���ڴ��������. ���� bug, �븺��
����ʦ��������.
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"fund_office",
  "west"  : __DIR__"hall1",
  "down"  : "/open/common/room/inn",
  "south" : __DIR__"area",
  "east"  : __DIR__"eq",
  "meeting" : __DIR__"meeting",
]));
  set("objects", ([ /* sizeof() == 1 */
__DIR__"npc/server" : 1,
]));
	set("no_fight", 1);
	set("no_clean_up", 0);
	set("no_magic", 1);

	setup();
	call_other("/obj/board/player_b","???");
}
