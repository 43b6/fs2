// Room: /d/snow/smithy.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��������");
  set ("long", @LONG
������һ��������ӣ��ӻ�¯��ð���Ļ�⽫ǽ��ӳ��ͨ�죬����
�Ľ���������˸�ʽ���������Ʒ��δ���Ʒ�����ǳ�ͷ������������
�ȣ����������������õ��������졣
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"mstreet2",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/smith" : 1,
]));

  setup();
}
