// Room: /open/gsword/room/eghouuse3.c
inherit ROOM;

void create ()
{
  set ("short", "�޾�");
  set ("long", @LONG
����Ǳ��ֽϸߵ�ʦ������ס�ĵط���ֻ��һ���ŵĴ����еķǳ�����
�����ϵı��죬����ȸ����۵��ķ����������Լ��ɽ�����֮�ϣ�����
�ɽ����ӵ����Բ�ڭ��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/g3-8.c",
]));

  set("objects",([
    "/open/gsword/npc/trainee-1":1,
  ]));

  setup();
}
