// Room: /open/gsword/room/eghouuse3.c
inherit ROOM;

void create()
{
  set ("short", "�޾�");
  set ("long", @LONG
����Ǳ��ֽϸߵ�ʦ������ס�ĵط���ֻ��һ���ŵĴ����еķǳ�����
�����ϵı��죬����ȸ����۵��ķ����������Լ��ɽ�����֮�ϣ�����
�ɽ����ӵ����Բ�ڭ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"eghouse4",
  "north" : __DIR__"eghouse2",
]) );

  setup();
}
