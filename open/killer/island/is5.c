// Room: /u/u/unfinished/room/is5.c
inherit ROOM;

void create ()
{
  set ("short", "ɳ̲");
  set ("long", @LONG
��������С���Ķ��Ͻ�, վ��������ѩ��ɳ̲�������ޱ߼ʵĺ���, ������
��е������������ˬ, ���еķ��ռ�����춼������΢�ĺ����������Ժ�. ɱ
��, ŭ������������ɳ̲��������ʧ����, ���㼸�������Լ������. ������ɳ
̲, �����Ǵ�ֻ��ǳ��.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"is8.c",
  "west" : __DIR__"is4",
]));

  setup();
}
