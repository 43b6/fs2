// Room: /open/main/room/M12b.c

inherit ROOM;

void create()
{
	set("light_up",1);
	set("short", "��ɽ����");
	set("long", @LONG
	�ߵ��������Ѳ���ո�������Ũ�ܣ�����ȷ����ȷ��
	������ȼ�գ������ص����ǻ���һֱ������ͬ���Ĵ�
	С���ƺ������ܵ�ɽ�紵Ϯ��Ӱ�졣


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"M11a",
  "eastdown" : __DIR__"M13b",
]));

	setup();
}
