// Room: dancer's rest room //by purple
inherit ROOM;
void create ()
{
	set("short","����̸����");
  set ("long", @LONG
����������ר�õ����죬̸�ģ������ĵõĵط����������ߵ�
����Ů�ǿ����ڴ��໥���֡�ǰ����Ҳ���Խ������װ������
�ڴˣ����չ������ǡ����ŵĻ�������׺�ż��䵭�ۺ��õ��
�������ŵĻ��㣬���˲���������ƣ��.....��������(dancing)
�������������벻���Ľ���~~
LONG);

  set("light_up", 1); 
  set("exits", ([ /* sizeof() == 2 */
        "east" : __DIR__"start",
]));
	set("objects",([
	]));
  set("no_magic", 1);
  set("no_fight", 1);

  setup();
}
void init()
{
  add_action("do_dancing","dancing");
}
int do_dancing()
{
  object me;
  me = this_player();
  me->move("/open/ping/room/road3");
  return 1;
}
