// Room: /open/tendo/room/t05.c

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
  "north" : __DIR__"t10",
  "west" : __DIR__"t04",
]));
		set("light_up",1);
	setup();
}
