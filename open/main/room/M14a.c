// Room: /open/main/room/M14a.c

inherit ROOM;

void create()
{
	set("short", "��ɽ����");
	set("long", @LONG
	�����ϳ��Ⱦ���ȫû�������У����ʼ��ƺ�������Զ
	���ж�����ȼ�ա�


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"M13b",
  "westdown" : __DIR__"M13a",
]));
	set("outdoors", "1");

	setup();
}
