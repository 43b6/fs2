inherit ROOM;
 
void create ()
{
  set ("short", "�ڰ��Ľֵ�");
  set ("long", @LONG
���ϱ��ߣ���Խ��Խ�е�ƫƧ�������Ȼ�Ƕ��˹ȣ���������·ȴ���������̣�һ�ɹ�������������������˿�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"s1-2",
  "southdown" : __DIR__"s2",
]));

  setup();
}
