// Room: /open/gsword/room/gsword3-6.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������ɽ��ɵĺ��ã����ϲ������£���������һ����������������
�ڣ������¾ɣ�������ǰ��������ʦ���彣��ǰ��ǽ�Ϲ���һ�Ż��񣬻�
��������ò���ţ�����������ʮ���꣬����˫ĿԶ�ӣ��������У�����һ
������콣���㲻������һ�������������ɽ���ɽ��ʦ �� ��ң�ӡ�����
��������ᡣ
 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/g5-3.c",
  "northwest" : "/open/gsword/room/sproom.c",
]));

  set("light_up", 1);

  setup();
}
