// Room: /open/main/room/cloister.c

inherit ROOM;

void create()
{
	set("valid_startroom",1);
	set("short", "������");
	set("light_up",1);
	set("long", @LONG
	�������۹�����̫���Ͼ����Ͼ�����ǰ����¯ð��
	���Ƶ����̣��������޵�̴��Ʈɢ�ڿ����У�����
	�����泩��


LONG
	);
	set("no_fight",1);
	set("no_magic",1);
	set("objects",([
	"/daemon/class/taoist/master" : 1,
		]) );
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"M14",
]));

	setup();

}
