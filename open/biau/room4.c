// Room: /u/o/onion/room/w_room2.c

inherit ROOM;

void create()
{
	set("short", "�����������");
	set("long", @LONG
�����ѵ��˳��ȵľ�ͷ,����ǰ�������˹����ĵط�,����ڵĳ�������ǰ��,��ʱ
����������Ĳ���ζ,Ũ����ζ��������ʳָ��,�����̲�ס���๾��Ľ�������.
    �Ϸ��������˵��Է�.

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room5",
  "west" : __DIR__"room3",
  "east" : __DIR__"cookroom",
]));

	setup();
}
