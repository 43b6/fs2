// Room: /open/center/room/loto.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����һ��������, ���ϰ�;�������, ����ǳ������¸�����
Ϊ��, ���õ��������������߷�������. �������������ձ���ģ
������Ϊ�����۸�, ��������ľ�߷����ͷ������鱱¬�ظ�����
կʮ����. ˫�������䵶��֪��������Ӣ�ۺú�, ������ڴ����
�ɰ��ÿ���һ��, ����, �ٺ�...
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"road1",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/loto" : 2,
]));

  set("light_up", 1);

  setup();
}
