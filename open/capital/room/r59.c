// Room: /open/capital/room/r59.c

inherit ROOM;

void create ()
{
  set ("short", "����ֿ�");
  set ("long", @LONG
������Ǿ������ٹ��˵�ס��, ƽ�����ǲ��ᵽ�����������
�����ġ�����ı�����һ����̨, �ǻʵ���Ϊ���롢�Ѹ������, ƽ����ʱ
��Ҳ���Կ������ϵ��ϸ�̨, ����Զ��, ������ʫ��
    ���ϵ����������Ǿ�����ٵĵش������е��̵�����ɴ˽ֵ�
�����������������úõĹ��Ļ�, �����߾Ͷ���, �Ϸ���ͷ������
�����š�

LONG);

	set("objects", ([ /* sizeof()==1 */
	"/open/capital/npc/cleanman" : 1
]) );

  set("exits", ([ /* sizeof() == 5 */
  "west" : __DIR__"r58",
  "south" : __DIR__"r66",
  "north" : __DIR__"r74",
  "east" : __DIR__"r60",
  "northup" : __DIR__"tower",
]));
  set("outdoors", "/open/capital");

  setup();
}
