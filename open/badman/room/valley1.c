// Room: /open/badman/room/valley1.c
// written by powell 96.4.26@FS

inherit ROOM;

void create ()
{
  set ("short", "����ɽ��");
  set ("long", @LONG
���ܵ�������󣬾�Ȼ���������ɽ�ȣ�������ľïʢ������
���㣬�����Ǹ��˼��ɾ������в�ʱ������֨֨��е�����������
�������Ǻ��ӵĽ�����������ɽ�ȿ�����Ⱥ�����ǵ����¡�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"lake5",
  "east" : __DIR__"valley2",
]));
  set("outdoors", "/open/badman");

  setup();
}
