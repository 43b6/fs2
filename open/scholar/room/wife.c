// Room: /open/scholar/room/wife.c 
inherit ROOM;
 
void create ()
{
  set ("short", "�Է�");
  set ("long", @LONG
�������װ��������������ס���Է�, �Է���ֻ������һ�˶�����
�Է�������, ֻ������һ�ߴ�����, һ�߿���, һ���㴳�����㳯
��ɱ�˹�ȥ��

LONG);

  set("exits", ([ /* sizeof() == 1 */
"east":"/open/ping/room/r1",
]));
set("objects",([
"/open/scholar/npc/ra_wife.c":1,
]));

  setup();
  replace_program(ROOM);
}
