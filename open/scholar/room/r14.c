// /u/j/judd/room/r14.c
inherit ROOM;

void create ()
{
  set ("short", "���ú���");
  set ("long", @LONG
�����ǹ�����Ϣ�ĵط���Ҳ�����ŽӴ��ÿ͵ĵط������������
ȫ������ľ�Ƶģ��м���һ��Բ������������˸�ʽ��ˮ��(fruit)
���������Խ�ʣ�������ֹ����
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "fruit" : "��Щˮ������������ܺó�˵������͵���ǲ��õ���Ϊ��
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r17.c",
]));
  set("light_up", 1);

  setup();
}
