// Room: /open/tendo/room/t04.c

inherit ROOM;

void create()
{
	set("short","������Χ����");
	set("long", @LONG
�������ڵ��۵���Χ�����ϣ��������ż�Ӳ��ˮĥ��
ש�����������˴��̵���ľ�����������泩��

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"t03",
  "east" : __DIR__"t05",
]));
		set("light_up",1);
	setup();
}
