// Room: /open/badman/room/b2
inherit ROOM;

void create ()
{
  set ("short", "���˹ȴ��");
  set ("long", @LONG
ƽ̹�Ĵ������յյ�ƻ����ҫ�£��Եø����������͡���
�ǹȿڵ��ǿ�ʯ������˭������������ɽ��һ��Ľֵ������ǽ���
�кڰ������޲���֮ɥ���Ķ��˹�֮���ڡ�
    ����Խ��ƽ����Խ�����˲��ò�������ÿһ���񾭣���Ϊ˭Ҳ
��֪���ǿ�������Σ�ջ��������ɶ�����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/guard" : 2,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b3",
  "east" : __DIR__"b1",
]));

  setup();
}
