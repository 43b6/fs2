inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

��ӷ���һ·���������������������ˮ��һ��γ����ˡ��м���ʦ
����������׼���������ϯ�������ʦ����ע��͵һЩ���ģ����һ����
С�ı��̵��ˡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g1-7",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/cook" : 1,
]));
  set("light_up", 1);

  setup();
}
