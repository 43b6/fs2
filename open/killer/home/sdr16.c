inherit ROOM;

void create ()
{
set("short","������");
  set ("long", @LONG
������ɱ����̳�ĵ����Թ���Ҳ���ɻ�������Զ����������á�
�˴��ǻ�������鳤�����칤���ĵط�����û�кܶ�Ĳ���
����������֣�������Ҷ��ɱ������������������ֵĻ������С��һ��
�Ϸ��ƺ���һ�����ڣ���������ȥ��������뿪�������ԡ�

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"east" : __DIR__"sdr12.c",
"north" : __DIR__"sdr15.c",
"jump" : __DIR__"outr1.c",
]));
set("objects",([
"/open/killer/npc/hu_fa3.c":1,
]));
  setup();
}