// Room: /open/su/room/biau_beyond.c

inherit ROOM;

void create()
{
	set("short", "���У��");
	set("long", @LONG
����һ�ۿ�ȥ,�������������õ�����,����һȺ��ʦ�ڻ����д�����,�½���
��ϰ����һ��һ�۵���ϰ�书,��������,����ʮ��Ŭ��,����ȥ��������,ư����
�Զ����������Ӽ����.
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"armory",
//"south" : "/open/su/room/postoffice",
  "west" : __DIR__"opening0",
  "east" : __DIR__"room0",
]));

	setup();
}
