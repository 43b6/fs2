// Room: /u/u/unfinished/room/is6.c
inherit ROOM;

void create ()
{
  set ("short", "б��");
  set ("long", @LONG
һ���ϱ����б��, ������ӿ�ĺ�ˮ���ϵ��Ĵ����ұ�. �˵��������ľ,
��������ïʢ������. ��ص���ʯ������е��ƶ�����. ����ı�����һ��Ƭ��
��, ��������Ҫ�����оͲ��ò�������Ƭ����������, ��ñ��������þ�, ����
����������������ʧ.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"is1",
  "north" : __DIR__"is10.c",
]));
  set("outdoors", "/u/u");

  setup();
}
