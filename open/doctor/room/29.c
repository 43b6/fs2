inherit ROOM;
void create ()
{
  set ("short", "�����ſⷿ");
  set ("long", @LONG

���������������ŵĿⷿ���˵���ר����������һЩ��δ�õ�������
��ҩƷ�ĵط�������������ҩ��ҩ�ޣ����磺��ɽѩ����ǧ����
֥��Ұɽ�˲�....�ȣ����Ǽ�������ϡ��ҩ�ģ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"3",     
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/npc/lan.c" : 1,
]));

  set("light_up", 1);
  setup();
}


