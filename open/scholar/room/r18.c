// /u/j/judd/room/r18.c
inherit ROOM;

void create ()
{
  set ("short", "���ö���");
  set ("long", @LONG
�������ڷ�������ͼ��ݵ��м䣬�������Ƿ���ͼ��ݣ����Ͼ�
������ͼ��ݣ����ذ����ɫҲ���м�Է֣������Ǵ����İ�ɫ��
�ϱ��Ǵ������Ļ�ɫ��Ҳ��֪������ʲô����Ⱦ��ɫ���������൱��
���졣
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"e3.c",
  "south" : __DIR__"r21.c",
  "north" : __DIR__"r15.c",
]));
  set("light_up", 1);

  setup();
}
