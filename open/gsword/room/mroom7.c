// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
  set ("short", "�ɽ���ǰɽ");
  set ("long", @LONG
    ǰ������,ֻ����ʯ����,ˮ������,����ˮ��Ϯ��,��������������,
��·�ڴ�ת�򱱷�,��ֱ�����Ѿ����ɽ�����Χ.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"road1.c",
  "east" : __DIR__"mroom6.c",
]));

  set("outdoors", "/open/gsword/room");

  setup();
}
