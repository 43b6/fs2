inherit ROOM;
void create()
{
  set ("short", "����");
	set( "build", 23 );
  set ("long", @LONG
����ɱ���ǳ���׷ɱ���ˣ����³�Ҳ��٣���̳��Ȼ������ѵıܷ�ۡ�
Ϊ�˷��㳤�ڶ�أ�����ɱ�ֵ���Ϣ����Է��ĵط����ٲ��ˡ�
������ɱ���ǳԷ��Ĵ���������ᡣû�²�Ҫ��������Ŷ��
LONG);
   set("exits", ([
   "east"   : __DIR__"foodrm.c",
   "west"   : __DIR__"floorm.c",
   "north"  : __DIR__"shoprm.c",
  ]));
   set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  set("light_up", 1);
  setup();
} 
