// Room: /u/e/eiei/work/troom3a.c
inherit ROOM;

void create ()
{
  set ("short", "�ּ�С·");
  set ("long", @LONG
    �������ľ�����ر��ïʢ��������Ҫ�����С��
    ͨ���ķ��ָ��Ӳ����ף�����Ҳ��Ϊ�����������أ�
    ��˵���������������ĳЩ����ҽ����������Ч��ҩ��
    ��
LONG);

  set("exits", ([ /* sizeof() == 3 */
/*
  "west" : __DIR__"troom_3a1.c",
*/
  "east" : __DIR__"troom_3a_1.c",
  "westdown" : "/open/snow/room/troom_3",
]));
     set("objects",([
     "/open/snow/npc/teacher.c": 1,
]));
  set("outdoors", "/u/e/eiei");

  setup();
}
