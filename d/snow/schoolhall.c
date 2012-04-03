// Room: /d/snow/schoolhall.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ������ݴ���");
  set ("long", @LONG
�����Ǵ�����ݵ�����������̫ʦ��һ���ſ�������ſڣ�������
������λ��ʦ����������������λ����һ����ݲ�ͬ���ǣ�ǽ�Ͼ�Ȼ
���ż��������Ϊ���׵��黭����ʾ��������˲��Ǵ��ֲ�ʶ�Ĵֺ���
��������˫ȫ�ĸ��ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"school2",
  "east" : __DIR__"inneryard",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/swordsman" : 1,
]));
  set("valid_startroom", 1);

  setup();
}
