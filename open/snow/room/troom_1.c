// Room: /u/e/eiei/work/troom_1.c
inherit ROOM;

void create ()
{
  set ("short", "�ּ�С��");
  set ("long", @LONG
    �߳�ѩ���ɵ��ܲ�֮�󣬾Ϳ��Կ�����һ��ͨ��ɽ�ϵ�
    С·��·�Գ�����һЩ�в������ֵ�ֲ���Ȼ������
    �е���죬����������ɫ���ޣ�����ɢ������һ������
    ����Ϣ��
LONG);

  set("outdoors", "/u/e/eiei/work");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"troom_0.c",
  "north" : __DIR__"troom_2.c",
]));

  setup();
}
