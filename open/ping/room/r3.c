// Room: /u/m/moner/open/room/r3.c 
inherit ROOM;
 
void create ()
{
  set ("short", "��¥¥��");
  set ("long", @LONG

���¿��Իص���¥, ¥�ݵķ��ֺ�����¥�ݶ���ѡ���ϵ�ľ�������,
���ĵ񹤾�ϸ����������̾Ϊ��ֹ, ��������¥�����ȡ�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r2.c",
  "down" : __DIR__"r4.c",
]));

  setup();
replace_program(ROOM);
}
