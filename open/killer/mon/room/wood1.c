//written by acelan...../u/a/acelan/room/wood1.c

inherit ROOM;

void create ()
{
  set ("short", "ɱ�ֺ�ɽ");
  set ("long", @LONG
������ɱ����̳�ĺ�ɽ, Ⱥ������, ��ס�˴󲿷ֵ�����, ����
�Ĺ�����, �㲢û�п����κ���, ����ȴ�·���һ��ŨŨ��ɱ����ӭ
����������, �㿪ʼ�����Ƿ�Ҫ����ǰ����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/killer/room/outr11",
  "north" : __DIR__"wood3.c",
]));

  setup();
}
