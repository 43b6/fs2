// Room: /open/poison/room/room4
inherit ROOM;

void create ()
{
  set ("short", "ľ��");
  set ("long", @LONG
����һ��Сľ�ݣ�����ֻ�����˼����ļҾߣ�����ʮ��
�ļ�©��ǽ������˼��Ѹ�ͷ (axe)��������Ӧ�����Է��
�Ұɡ�
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "axe" : "�󲿷ָ�ͷ�������⣬����ʹ���ˡ�
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road3",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/son.c" : 1,
  "/open/poison/npc/woodcutter.c" : 1,
]));

  setup();
}
