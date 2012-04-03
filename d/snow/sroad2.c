// Room: /d/snow/sroad2.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ѩͤ��ֵ�");
  set ("long", @LONG
������ѩͤ��Ľֵ�����ı�����һ�ҿ�ջ��������Ϳ���������
ջ����������̸Ц���������ֵ�������Զ���и�ת�����������������
ֱ�߾�����ɽ��С���ˣ�����������ߵ������������ﲻ���Ĺٵ���
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/d/snow/npc/farmer" : 2,
]));
  set("outdoors", "snow");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"school",
  "west" : __DIR__"sroad3",
  "east" : __DIR__"sroad1",
]));

  setup();
}
