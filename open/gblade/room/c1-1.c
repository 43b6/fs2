inherit ROOM;

void create ()
{
  set ("short", "ʯ��");
  set ("long", @LONG

ʯ�ҵ�ǽ���൱ƽ�����ҹ⻬����̧ͷ���Ͽ����ƺ���һ��С������ͨ��
���棬����������˵�Ǹ�С��ʵ��̫���ˣ�������һ�ɲ��п���������
��С����

LONG);

  set("light_up",0);
  set("exits", ([ /* sizeof() == 1 */
  "south" :__DIR__"c1-2.c",
  
]));

  setup();
}
