inherit ROOM;

void create ()
{
set("short","ɱ�ֵ���ѵ���� B ��");
  set ("long", @LONG
������ɱ����̳�ĵ����Թ���Ҳ���ɻ�������Զ����������á�
Ѱ���˲��޷����׵��뿪�˴�������Ӧ��С��һ�㣬
��Ϊ���ܴ�����ɱ��������˵�Ŵ˴���������Σ����
��������Ҳ�Ƕ���ɱ������ѵ���ĺõط���
�����ɱ���ƺ���ʢ�ˣ����û������ˢ�ӣ�����뿪���
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sdr11.c",
"south" : __DIR__"sdr8.c",
"east" : __DIR__"sdr3.c",
"north" : __DIR__"sdr6.c",
]));
set("objects",([
"/open/killer/npc/sdkillb.c":2,
]));
  setup();
}