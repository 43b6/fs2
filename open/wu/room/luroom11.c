// Room: /open/wu/room/luroom11.c
// ��ɽ��ݵĻ�԰
inherit ROOM;
void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
��������ɽ��ݵĻ�԰,������ɽ��ݵĵ���λ��λ���Ϸ������ļ���
��,��������,�����޼�����Ļ�԰,������ʮ����ˬ,�����Կ���ƽʱ��
��������,����������һЩ��Ȥ��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom8",
  "south" : __DIR__"luroom13",
  "east" : __DIR__"luroom12",
]));

  setup();
}
