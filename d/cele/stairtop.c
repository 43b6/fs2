inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ˮ�̸��ɽͤ");
  set ("long", @LONG
    ������һ���ð�ʯ���ɵ�ͤ�ӣ�ͤ�ӵĶ���ͱ��涼������׵�
���£�����������ȥֻ��һƬ����֮��ͻ������ɽ�壬����֮��������
�Կ�������ˮ����΢�⣬ʹ��һʱ֮��·���Ϊ����ͤ���ǽ���һ����
�У���������ȥ���Կ���ˮ�̸�Ư��������֮�С�

LONG);

  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "westup" : "/d/cele/stair3",
  "southdown"  : "/d/cele/stair2",
]));

        set("objects", ([
                "/d/cele/npc/watcher": 1,
                "/d/cele/npc/cele_tiger": 1 ]) );

  setup();
}
