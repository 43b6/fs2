// Room: /u/m/moner/open/room/r4.c 
inherit ROOM;
 
void create ()
{
  set ("short", "��¥¥��");
  set ("long", @LONG

    ���Ͽ���ͨ����¥, ���»ص�һ¥, ¥�ݵķ��ֺ�����¥�ݶ���ѡ���ϵ�
ľ�������, ���ĵ񹤾�ϸ����������̾Ϊ��ֹ, �����Ƕ�¥�����ȡ�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "up" : __DIR__"r3.c",
  "west" : __DIR__"r5.c",
  "down" : __DIR__"r7.c",
]));

  setup();
  replace_program(ROOM);
}
