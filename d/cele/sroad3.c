inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��ʯ�ٵ�");
  set ("long", @LONG
    ����һ������ʵ����ʯ������������ɽ��������ɽ�����죬һ
�������İ�ʯ���ݴ�������������ɽ���������������ݵľ�ͷ��һ����
ΰ��¥���Ǿ��������ġ�ˮ�̸󡱡�

LONG);

  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "east" : "/d/cele/sroad2",
  "northup"  : "/d/cele/stair1",
]));

        set("objects", ([
                "/d/cele/npc/guard": 2 ]) );

  setup();
}
