// pkr1.c by konn
// pkr1.c by konn
inherit ROOM;

void create ()
{
  set ("short", "��һ�����");
  set ("long", @LONG
����վ����������ǽ, ÿ�˸�����һ��ţƤ��, �������˵�����, һ����
����������Ķ���, ����ǧ�������ľ��ӷ�ӿ����, ����������ݵ�һ
��, ����ǽ�����˻�Ƥ, �������˼�����ΰ�����ơ���ǽ������һȺʿ��
���ܳ�, һȦ��һȦ, һȦ��һȦ, �㲻���е�����������




LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"pkr4",
  "east" : __DIR__"pkr2",
]));
  set("light_up", 1);
  set("no_transmit", 1);
set("no_scale",1);
  setup();
}


