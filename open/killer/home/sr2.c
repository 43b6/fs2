inherit ROOM;

void create ()
{
set("short","ɱ������");
  set ("long", @LONG
�����Ǽ�Ϊƽ���ĵط���һ����ȥ���ƺ�û��һ����˯���ĵط���
��������ɱ�ֵ�������ƣ�Ϊ����˯��ʱ����ɱ��������һ���ǿ�����˯�����ˡ�
�ض���ʱ�������������ţ���������û�ɱ����˯�е����ǲ����ܵġ�

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sr3.c",
"south" : __DIR__"sr1.c",
]));
set("objects",([
"/open/killer/npc/guard.c":2,
]));
  setup();
}