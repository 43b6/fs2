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
  "west"  : __DIR__"t01",
  "east"  : __DIR__"t03",
]));
	set("light_up",1);
	setup();
}
