// Room: /u/e/eiei/work/troom3a.c
inherit ROOM;

void create ()
{
  set ("short", "�ּ�С·");
  set ("long", @LONG
    �������ľ�����ر��ïʢ��������Ҫ�����С��
    ͨ���ķ��ָ��Ӳ����ף�����Ҳ��Ϊ�����������أ�
    ��˵���������������ĳЩ����ҽ����������Ч��ҩ��
    ��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"troom_3a.c",
]));
  set("outdoors", "/u/e/eiei");

  setup();
}
