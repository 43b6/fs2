inherit ROOM;
 
void create ()
{
  set ("short", "�ڰ��Ľֵ�");
  set ("long", @LONG
���ϱ��ߣ���Խ��Խ�е�ƫƧ�������Ȼ�Ƕ��˹ȣ���������·ȴ���������̣�һ�ɹ�������������������˿�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"s1-2.c",
  "north" : __DIR__"b15",
]));

  setup();
}
