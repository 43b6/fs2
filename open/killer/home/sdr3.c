inherit ROOM;

void create ()
{
set("short","ɱ�ֵ���ѵ���� A ��");
  set ("long", @LONG
������ɱ����̳�ĵ����Թ���Ҳ���ɻ�������Զ����������á�
Ѱ���˲��޷����׵��뿪�˴�������Ӧ��С��һ�㣬
��Ϊ���ܴ�����ɱ��������˵�Ŵ˴���������Σ����
��������Ҳ�Ƕ���ɱ������ѵ���ĺõط���

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sdr7.c",
"south" : __DIR__"sdr4.c",
"north" : __DIR__"sdr2.c",
]));
set("objects",([
"/open/killer/npc/sdkilla.c":3,
]));
  setup();
}