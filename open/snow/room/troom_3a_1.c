// Room: /u/e/eiei/room/troom_3a_1.c
inherit ROOM;

void create ()
{
  set ("short", "������ʯ·");
  set ("long", @LONG
    �ߵ���������ƺ���ð���ˡ������������ϸ��
    �Ļ�����·��һ�Ժ�����һ����ʯ���̳ɵĵ�С·����
    Ȼ��������ʯ���Ѿ��е��Ͼɣ�����������ʯ��һֱ��
    �����������죬���Կ��������Ե���һ��ͻ���ˡ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
]));
  set("outdoors", "/u/e/eiei/room");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"troom_3a_2.c",
  "west" : __DIR__"troom_3a.c",
]));

  setup();
}
