// Room: /u/m/moner/open/room/r7.c 
inherit ROOM;
 
void create ()
{
  set ("short", "һ¥¥��");
  set ("long", @LONG

    ���Ͽ���ͨ����¥, ¥�ݵķ��ֺ�����¥�ݶ���ѡ���ϵ�ľ�������
���ĵ񹤾�ϸ����������̾Ϊ��ֹ, ¥�ݵ�����Ҳ�����˻�ѡ�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"r4.c",
  "west" : __DIR__"room14.c",
]));

  setup();
  replace_program(ROOM);
}
