// Room: /open/gsword/room/su6.c

inherit ROOM;

void create()
{
	set("short", "��ʯС��");
	set("long", @LONG
������ʯС����,�����Ѳ�����������,�ߴ�Ľ�����������,ȡ��
����һ��ƽ��,�˳�,Ҳ��������ʧ��.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"su7",
  "west" : __DIR__"suroom1",
  "east" : __DIR__"su5",
]));

        set("outdoors","/open/gsword");
	setup();
}
