// Room: /open/tendo/room/t01.c

inherit ROOM;

void create()
{
        set("short", "���۵���Χ����");
	set("long", @LONG
�������ڵ��۵���Χ�����ϣ��������ż�Ӳ��ˮĥ��
ש�����������˴��̵���ľ�����������泩��

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"t06",
  "east" : __DIR__"t02",
]));
	set("light_up",1);
	setup();
}
