// Room: /u/m/moner/water/r1.c
inherit ROOM;

void create ()
{
  set ("short", "�޷�");
  set ("long", @LONG

    ����ħ���½����ӵ��޷�������ħ��֮�ˣ���������δ��ȫ��ϰ��
�ľ��磬���϶Ի�����İ����ʹ����ϰ���е�Ч�ʽ��룬�ʰ��޷�����
ʦ������������ڼർ��һ�����ٱ�ɵĴ��������������롣 

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r8.c",
"east":__DIR__"r1.c",
]));
  set("light_up", 1);

  setup();
}
