// Room: /open/wu/room/luroom12.c
// ��ɽ��ݵĻ�԰
inherit ROOM;
void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
��������ɽ��ݵĻ�԰,������ɽ��ݵĵ���λ��λ���Ϸ������ļ���
��,��������,һ�������ķ紵��,���˾�����ˬ,��������ƽʱ����
������,���ܺ�������,����̸��˵���ĺõط���
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom11",
  "south" : __DIR__"luroom14",
  "east" : __DIR__"luroom15",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/bufferfly" : 2,
]));

  setup();
}
