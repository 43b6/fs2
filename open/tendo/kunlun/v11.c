// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "����ɽ");
	set("long", @LONG
	��ǰ�������ۣ���ͷд���������ĸ����֣���ר
	�Ž̵�����������еĵط��������������Ŷݼ�
	������֮������Ȥ�Ļ���������ڴ��ҵ�������Ҫ
	�ġ�������������ֱ���ƶˡ�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m7",
  "west" : __DIR__"M13",
 "enter" : __DIR__"cloister",
]));
	set("outdoors", "1");

	setup();
}
