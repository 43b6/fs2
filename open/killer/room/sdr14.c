inherit ROOM;

void create ()
{
set("short","ɱ�ֵ���ѵ���� D ��");
  set ("long", @LONG
������ɱ����̳�ĵ����Թ���Ҳ���ɻ�������Զ����������á�
Ѱ���˲��޷����׵��뿪�˴�������Ӧ��С��һ�㣬
�˴����Ǻ������ĳ������֣�����㲻��ǿ�Ļ���ò�Ҫ������
�˴��ĸ��֣���Щ�˵�ʵս���鲢����������ĸߣ������㻹��С�ĵĺá�
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"east" : __DIR__"sdr10.c",
"south" : __DIR__"sdr15.c",
"north" : __DIR__"sdr13.c",
]));
set("objects",([
"/open/killer/npc/sdkilld.c":1,
]));
  setup();
}