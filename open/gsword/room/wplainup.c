// Room: /open/gsword/room/wplainup.c
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
վ�ڸ߸ߵ����ϣ�Զ���ķ���������������̩���ɽ��ɣ����Ϸ��������г�
����Զ�� �����������޾���ɽ�����������̻��ƣ��ƺ���������һ�����硣

LONG);

  set("objects", ([ /* sizeof() == 1 */
 "/open/gsword/mob/eagle" : 2,
]) );

  set("outdoors", "/open/gsword/room" );

  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"wplain1",
]) );

  setup();
}
