inherit ROOM;

void create ()
{
set("short","ɱ�ֵ���ѵ���� C ��");
  set ("long", @LONG
������ɱ����̳�ĵ����Թ���Ҳ���ɻ�������Զ����������á�
Ѱ���˲��޷����׵��뿪�˴�������Ӧ��С��һ�㣬
��������Ҳ�Ƕ���ɱ������ѵ���ĺõط���
�����ɱ���ƺ���ʢ�ˣ����û������ˢ�ӣ�����뿪���
�˴����Ǻ������ĳ������֣�����㲻��ǿ�Ļ���ò�Ҫ������
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sdr13.c",
"east" : __DIR__"sdr5.c",
"south" : __DIR__"sdr10.c",
]));
set("objects",([
"/open/killer/npc/sdkillc.c":2,
]));
  setup();
}